all: message_win.o message_lose.o message_new_game.o message_key_command.o message_key.o logger_terminal.o logger_file.o logger_terminal_file.o

message_win.o: lb_6/message_win.cc lb_6/headers/message_win.h lb_6/headers/message.h lb_1/headers/player.h
	g++ -c lb_6/message_win.cc

message_lose.o: lb_6/message_lose.cc lb_6/headers/message_lose.h lb_6/headers/message.h lb_1/headers/player.h
	g++ -c lb_6/message_lose.cc

message_new_game.o: lb_6/message_new_game.cc lb_6/headers/message_new_game.h lb_6/headers/message.h lb_2/headers/field.h 
	g++ -c lb_6/message_new_game.cc

message_key_command.o: lb_6/message_key_command.cc lb_6/headers/message_key_command.h lb_6/headers/message.h lb_4/headers/handler.h 
	g++ -c lb_6/message_key_command.cc

message_key.o: lb_6/message_key.cc lb_6/headers/message_key.h lb_6/headers/message.h lb_4/headers/handler.h 
	g++ -c lb_6/message_key.cc

logger_terminal.o: lb_6/logger_terminal.cc lb_6/headers/logger_terminal.h lb_6/headers/logger.h
	g++ -c lb_6/logger_terminal.cc

logger_file.o: lb_6/logger_file.cc lb_6/headers/logger_file.h lb_6/headers/logger.h
	g++ -c lb_6/logger_file.cc

logger_terminal_file.o: lb_6/logger_terminal_file.cc lb_6/headers/logger_terminal_file.h lb_6/headers/logger_file.h lb_6/headers/logger_terminal.h
	g++ -c lb_6/logger_terminal_file.cc