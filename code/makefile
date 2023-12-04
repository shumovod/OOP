include lb_1/makefile
include lb_2/makefile
include lb_3/makefile
include lb_4/makefile
include lb_5/makefile
include lb_6/makefile

LB_1 = player.o control.o
LB_2 = cell.o field.o
LB_3 = event_health.o event_move.o event_score.o field_creator.o
LB_4 = game.o input_terminal.o handler.o
LB_5 = render_terminal.o tracker.o
LB_6 = message_win.o message_lose.o message_new_game.o message_key_command.o message_key.o logger_terminal.o logger_file.o 
all: prog clean

prog: main.o ${LB_1} ${LB_2} ${LB_3} ${LB_4} ${LB_5} ${LB_6}
	g++ main.o ${LB_1} ${LB_2} ${LB_3} ${LB_4} ${LB_5} ${LB_6} -o prog

main.o: main.cc lb_4/headers/game.h lb_4/headers/input_terminal.h lb_5/headers/render_terminal.h
	g++ -c main.cc

clean:
	rm *o