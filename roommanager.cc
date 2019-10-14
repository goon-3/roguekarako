//See the LICENSE file for details
#include <SDL/SDL.h>
#include <list>
#include <iostream>

#include "roommanager.h"
#include "roomkarakovillage.h"

RoomManager::RoomManager(int roomnr)
{
	switch(roomnr) {
	case 0:{
		_current = RoomKarakoVillage();
	}
	default:
		_current = RoomKarakoVillage();
	}
}

RoomManager::~RoomManager()
{}

Room& RoomManager::getr()
{
	return _current;
}

void RoomManager::update(Coord& xyz, Coord& mxyz)
{
	
	_current.setx(xyz.getx());		
	_current.sety(xyz.gety());		

}

void RoomManager::draw(Screen& screen)
{
	SDL_Rect r;
	r.x = _current.getx();
	r.y = _current.gety();
	SDL_Surface *bg = _current.getbg();
	SDL_Surface *s = screen.gets();
	SDL_BlitSurface(bg, NULL, s, &r);
	
}

