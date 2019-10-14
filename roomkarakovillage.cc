//See the LICENSE file for details
#include <SDL/SDL.h>
#include "roomkarakovillage.h"
#include "imagehandle.h"

#include "roomnames.h"

RoomKarakoVillage::RoomKarakoVillage()
{
	ImageHandle ih;
	ih.load(roombgnames[0]);
	setbg(ih.gets());
}

RoomKarakoVillage::~RoomKarakoVillage()
{}
		
void RoomKarakoVillage::update()
{}

