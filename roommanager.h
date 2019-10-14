//See the LICENSE file for details
#ifndef _ROOMMANAGER_H_
#define _ROOMMANAGER_H_

#include <SDL/SDL.h>
#include <list>

#include "room.h"
#include "screen.h"
#include "coord.h"

class Room;
class Screen;
class Coord;

class RoomManager
{
	public:
		RoomManager(int roomnr = 0);
		~RoomManager();

		Room& getr();

		void update(Coord& xyz, Coord& mxyz);
		void draw(Screen& screen);

	private:
		std::list<Room> _rooms;
		Room _current;

};
#endif
