//See the LICENSE file for details
#ifndef _COORDINT_H_
#define _COORDINT_H_

#include <SDL/SDL.h>

class CoordInt
{
	public:

		virtual int getx() = 0;
		virtual int gety() = 0;
		virtual int getz() = 0;

		virtual int setx(int dx) = 0;
		virtual int sety(int dy) = 0;
		virtual int setz(int dz) = 0;

	protected:
		int _x,_y,_z;
};

#endif
