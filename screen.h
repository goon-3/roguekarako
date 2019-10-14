//See the LICENSE file for details
#ifndef _SCREEN_H_
#define _SCREEN_H_

#include <SDL/SDL.h>

class Screen
{
	public:
		Screen();
		~Screen();

		SDL_Surface *gets() { return scr; }
		void flip();
	private:
		SDL_Surface *scr;	
};

#endif
