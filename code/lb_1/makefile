all: player.o control.o

player.o: lb_1/player.cc lb_1/headers/player.h 
	g++ -c lb_1/player.cc

control.o: lb_1/control.cc lb_1/headers/control.h lb_1/headers/directions.h lb_2/headers/field.h lb_1/headers/player.h
	g++ -c lb_1/control.cc