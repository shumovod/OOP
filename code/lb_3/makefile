all: event_health.o event_move.o event_score.o field_creator.o

event_health.o: lb_3/event_health.cc lb_3/headers/event_health.h lb_1/headers/control.h lb_3/headers/event.h
	g++ -c lb_3/event_health.cc

event_move.o: lb_3/event_move.cc lb_3/headers/event_move.h lb_1/headers/control.h lb_3/headers/event.h
	g++ -c lb_3/event_move.cc

event_score.o: lb_3/event_score.cc lb_3/headers/event_score.h lb_1/headers/control.h lb_3/headers/event.h
	g++ -c lb_3/event_score.cc

field_creator.o: lb_3/field_creator.cc lb_3/headers/field_creator.h lb_3/headers/event_health.h lb_3/headers/event_move.h lb_3/headers/event_score.h
	g++ -c lb_3/field_creator.cc