//See the LICENSE file for details
#include <SDL/SDL.h>
#include "screen.h"

Screen::Screen()
{

	scr = SDL_SetVideoMode(640,480, 32, SDL_HWSURFACE);

}

Screen::~Screen()
{}

void Screen::flip()
{
	SDL_Flip(scr);
}

