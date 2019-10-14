//See the LICENSE file for details
#ifndef _IMAGEHANDLE_H_
#define _IMAGEHANDLE_H_

#include <SDL/SDL.h>
#include <string>

class ImageHandle
{
	public:
		ImageHandle();
		ImageHandle(SDL_Surface *s);
		~ImageHandle();

		void load(std::string filename);

		SDL_Surface *gets() { return img; }
	private:
		SDL_Surface *img;	
};

#endif
