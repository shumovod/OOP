#include "headers/search_player.h"

void SearchPlayer::move(Player& player, Field& field, int& x, int& y) {
    int width = field.get_width();
    int height = field.get_height();

    int** arr = new int*[width];

    for (int i = 0; i < width; i++)
        arr[i] = new int[height];

    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            if (field.get_cell(i, j).get_passability()) 
                arr[i][j] = height * width;
            else 
                arr[i][j] = -1;
        }
    }

    find(arr, player.get_x(), player.get_y(), 0, width, height);

    int value = height * width;
    int move_x = 0;
    int move_y = 0;

    if ((x - 1 >= 0) && field.get_cell(x - 1, y).get_passability() && arr[x - 1][y] < value) {
        value = arr[x - 1][y];
        move_x = -1;
    }

    if ((x + 1 < width) && field.get_cell(x + 1, y).get_passability() && arr[x + 1][y] < value) {
        value = arr[x + 1][y];
        move_x = 1;
    }

    if ((y - 1 >= 0) && field.get_cell(x, y - 1).get_passability() && arr[x][y - 1] < value) {
        value = arr[x][y - 1];
        move_x = 0;
        move_y = -1;
    }

    if ((y + 1 < height) && field.get_cell(x, y + 1).get_passability() && arr[x][y + 1] < value) {
        value = arr[x][y + 1];
        move_x = 0;
        move_y = 1;
    }
    
    if ((field.check(x + move_x, y + move_y) && field.get_cell(x + move_x, y + move_y).get_passability()) && (player.get_x() != (x + move_x) || player.get_y() != (y + move_y))) {
        x += move_x;
        y += move_y;
    }

    for (int i = 0; i < width; i++)
        delete[] arr[i];
    delete[] arr;
}

void SearchPlayer::find(int** arr, int x, int y, int value, int& width, int& height) {
    arr[x][y] = value;
    if ((x - 1 >= 0) && (arr[x - 1][y] != -1) && (arr[x - 1][y] > value + 1)) 
        find(arr, x - 1, y, value + 1, width, height);

    if ((x + 1 < width) && (arr[x + 1][y] != -1) && (arr[x + 1][y] > value + 1)) 
        find(arr, x + 1, y, value + 1, width, height);

    if ((y - 1 >= 0) && (arr[x][y - 1] != -1) && (arr[x][y - 1] > value + 1)) 
        find(arr, x, y - 1, value + 1, width, height);

    if ((y + 1 < height) && (arr[x][y + 1] != -1) && (arr[x][y + 1] > value + 1)) 
        find(arr, x, y + 1, value + 1, width, height);    
}