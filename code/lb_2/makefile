all: cell.o field.o

cell.o: lb_2/cell.cc lb_2/headers/cell.h lb_3/headers/event.h
	g++ -c lb_2/cell.cc

field.o: lb_2/field.cc lb_2/headers/field.h lb_2/headers/cell.h
	g++ -c lb_2/field.cc