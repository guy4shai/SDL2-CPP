#include "Entity.hpp"

#include <iostream>

Entity::Entity(Vector2f p_position, SDL_Texture* p_tex)
	:position(p_position), tex(p_tex)
{
	currentFrame.x = 0;
	currentFrame.y = 0;
	currentFrame.w = 32;
	currentFrame.h = 32;
}

SDL_Texture* Entity::get_Tex()
{
	return tex;
}

SDL_Rect Entity::getCurrentFrame()
{
	return currentFrame;
}