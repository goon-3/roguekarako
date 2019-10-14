//See the LICENSE file for details

#ifndef _COORD_H_
#define _COORD_H_

#include <SDL/SDL.h>
#include "coordint.h"

class Coord : public CoordInt 
{
	public:
		Coord(int& x, int& y, int& z);
		~Coord();

	int getx() { return _x; }
	int gety() { return _y; }
	int getz() { return _z; }

	int setx(int dx) { _x += dx; return _x; };
	int sety(int dy) { _y += dy; return _y; };
	int setz(int dz) { _z += dz; return _z; };

	public:

};

#endif
