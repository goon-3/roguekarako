//See the LICENSE file for details
#include <iostream>

#include <SDL/SDL.h>

#include "screen.h"
#include "roommanager.h"

int main(int argc, char *argv[])
{

	SDL_Init(SDL_INIT_EVERYTHING);

	Screen screen;

	RoomManager rm(0);	

	int xs = 0, dx = 1, dy = 1;

	Coord xyz(xs,xs,xs); // map coordinates
	Coord dxyz(dx,dy,xs); // movement diffs

	SDL_Event e;
	while (SDL_WaitEvent(&e)) {

		if (e.key.keysym.sym == SDLK_ESCAPE) {
			return 0;	
		}

		if (e.key.keysym.sym == SDLK_UP) {
			
			xyz.sety(xyz.gety() - dxyz.gety());

		}

		if (e.key.keysym.sym == SDLK_DOWN) {
			
			xyz.sety(xyz.gety() + dxyz.gety());

		}

		if (e.key.keysym.sym == SDLK_LEFT) {
			
			xyz.setx(xyz.getx() - dxyz.getx());

		}

		if (e.key.keysym.sym == SDLK_RIGHT) {
			
			xyz.setx(xyz.getx() + dxyz.getx());

		}

		rm.update(xyz, dxyz);
		rm.draw(screen); 
		screen.flip();
	}
	
}


