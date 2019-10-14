CC="cc"
CXX="c++"

OBJS=room.o \
	roomint.o \
	roommanager.o \
	coordint.o \
	coord.o \
	imagehandle.o \
	shape.o \
	widget.o \
	widgettree.o \
	roomkarakovillage.o \
	screen.o \

all: main

main: $(OBJS) main.o
	$(CXX) `sdl-config --libs` -lSDL_image -o rogue main.o $(OBJS)

clean:
	rm -f *.o rogue rogue.core

.cc.o:
	$(CXX) `sdl-config --cflags` -c $< 
