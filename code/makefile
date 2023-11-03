all: prog clean

prog: player control cell field event_health event_score event_move field_creator game main
	g++ player.o control.o cell.o field.o event_health.o event_score.o event_move.o field_creator.o game.o main.o -o prog

main: main.cc headers/player.h headers/directions.h headers/control.h headers/cell.h headers/field.h
	g++ -c main.cc

player: player.cc headers/player.h
	g++ -c player.cc 

control: control.cc headers/player.h headers/directions.h headers/control.h headers/cell.h headers/field.h
	g++ -c control.cc

cell: cell.cc headers/cell.h
	g++ -c cell.cc

field: field.cc headers/player.h headers/cell.h headers/field.h
	g++ -c field.cc

event_health: event_health.cc headers/event.h headers/control.h headers/event_health.h
	g++ -c event_health.cc

event_score: event_score.cc headers/event.h headers/control.h headers/event_score.h
	g++ -c event_score.cc

event_move: event_move.cc headers/event.h headers/control.h headers/event_move.h
	g++ -c event_move.cc

field_creator: field_creator.cc headers/field_creator.h headers/control.h
	g++ -c field_creator.cc

game: game.cc headers/game.h headers/field_creator.h headers/control.h headers/directions.h
	g++ -c game.cc

clean:
	rm main.o player.o control.o cell.o field.o event_health.o event_score.o event_move.o field_creator.o game.o