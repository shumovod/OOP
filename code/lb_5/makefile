all: render_terminal.o tracker.o

render_terminal.o: lb_5/render_terminal.cc lb_5/headers/render_terminal.h lb_3/headers/event_health.h lb_3/headers/event_move.h lb_3/headers/event_score.h lb_5/headers/render.h
	g++ -c lb_5/render_terminal.cc

tracker.o: lb_5/tracker.cc lb_5/headers/tracker.h lb_6/headers/logger.h lb_6/headers/message_key.h lb_6/headers/message_key_command.h lb_6/headers/message_lose.h lb_6/headers/message_new_game.h lb_6/headers/message_win.h lb_5/headers/render.h lb_5/headers/states.h
	g++ -c lb_5/tracker.cc