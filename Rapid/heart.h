#ifndef HEART_H
#define HEART_H

#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include "block.h"

struct heart
{
    int z;
    heart();
    int x, y;
    SDL_Rect heartRect;
    void updatePos();
};

#endif // HEART_H
