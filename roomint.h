//See the LICENSE file for details
#ifndef _ROOMINT_H_
#define _ROOMINT_H_

#include <SDL/SDL.h>

class RoomInt
{
	public:

		RoomInt() { x = 0; y =0; }

		virtual int getx() { return x; }
		virtual int gety() { return y; }
		virtual int getw() { return w; }
		virtual int geth() { return h; }

		virtual int setx(int dx) { x += dx; return x; }
		virtual int sety(int dy) { y += dy; return y; }

	private:
		int x,y,w,h;
};

#endif
