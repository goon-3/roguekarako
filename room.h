//See the LICENSE file for details
#ifndef _ROOM_H_
#define _ROOM_H_

#include <SDL/SDL.h>
#include "roomint.h"
#include "screen.h"

class Room : public RoomInt
{
	public:
		Room();
		~Room();

		SDL_Surface *getbg() { return bg; }
		void setbg(SDL_Surface *bg0) { bg = bg0; }

		virtual void update();
	private:
		SDL_Surface *bg;

};

#endif
