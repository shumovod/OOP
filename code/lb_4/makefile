all: game.o input_terminal.o handler.o

game.o: lb_4/game.cc lb_4/headers/game.h lb_3/headers/field_creator.h lb_4/headers/handler.h lb_5/headers/tracker.h lb_6/headers/logger_file.h lb_6/headers/logger_terminal.h lb_6/headers/logger_terminal_file.h
	g++ -c lb_4/game.cc

input_terminal.o: lb_4/input_terminal.cc lb_4/headers/input_terminal.h lb_4/headers/input.h
	g++ -c lb_4/input_terminal.cc

handler.o: lb_4/handler.cc lb_4/headers/handler.h lb_4/headers/actions.h lb_4/headers/input.h
	g++ -c lb_4/handler.cc