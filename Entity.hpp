#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include "Math.hpp"

class Entity
{
public:
	Entity(Vector2f p_position, SDL_Texture* p_tex);

	Vector2f& getPosition()
	{
		return position;
	}

	SDL_Texture* get_Tex();
	SDL_Rect getCurrentFrame();

private:
	Vector2f position;
	SDL_Rect currentFrame;	
	SDL_Texture* tex;
};