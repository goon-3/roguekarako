//See the LICENSE file for details
#ifndef _ROOMKARAKOVILLAGE_H_
#define _ROOMKARAKOVILLAGE_H_

#include <SDL/SDL.h>
#include "room.h"

class RoomKarakoVillage : public Room
{
	public:
		RoomKarakoVillage();
		~RoomKarakoVillage();

	private:
		void update();

};

#endif
