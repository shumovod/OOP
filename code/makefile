all: prog clean

prog: player control cell field event_health event_score event_move field_creator game input_terminal handler render_terminal tracker main
	g++ player.o control.o cell.o field.o event_health.o event_score.o event_move.o field_creator.o game.o input_terminal.o handler.o render_terminal.o tracker.o main.o -o prog

main: main.cc headers/game.h headers/input_terminal.h headers/render_terminal.h
	g++ -c main.cc

player: player.cc headers/player.h
	g++ -c player.cc 

control: control.cc headers/control.h headers/directions.h headers/field.h headers/player.h
	g++ -c control.cc

cell: cell.cc headers/cell.h headers/event.h
	g++ -c cell.cc

field: field.cc headers/cell.h headers/field.h
	g++ -c field.cc

event_health: event_health.cc headers/control.h headers/event.h headers/event_health.h
	g++ -c event_health.cc

event_score: event_score.cc headers/control.h headers/event.h headers/event_score.h
	g++ -c event_score.cc

event_move: event_move.cc headers/control.h headers/event.h headers/event_move.h
	g++ -c event_move.cc

field_creator: field_creator.cc headers/event_score.h headers/event_health.h headers/event_move.h headers/field.h headers/field_creator.h 
	g++ -c field_creator.cc

game: game.cc headers/field_creator.h headers/game.h headers/handler.h headers/tracker.h
	g++ -c game.cc

input_terminal: input_terminal.cc headers/input.h headers/input_terminal.h 
	g++ -c input_terminal.cc

handler: handler.cc headers/actions.h headers/handler.h headers/input.h
	g++ -c handler.cc

render_terminal: render_terminal.cc headers/render.h headers/render_terminal.h 
	g++ -c render_terminal.cc

tracker: tracker.cc headers/render.h headers/states.h headers/tracker.h 
	g++ -c tracker.cc

clean:
	rm main.o player.o control.o cell.o field.o event_health.o event_score.o event_move.o field_creator.o game.o input_terminal.o handler.o render_terminal.o tracker.o