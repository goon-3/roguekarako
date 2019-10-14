//See the LICENSE file for details
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "imagehandle.h"

ImageHandle::ImageHandle()
{
	img = NULL;
}

ImageHandle::ImageHandle(SDL_Surface *s)
{

	img = s;

}

void ImageHandle::load(std::string filename)
{
	SDL_Surface *s = IMG_Load(filename.c_str());
	img = SDL_DisplayFormat(s);
	SDL_FreeSurface(s);	
}

ImageHandle::~ImageHandle()
{}

