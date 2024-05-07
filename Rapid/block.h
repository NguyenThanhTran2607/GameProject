#ifndef BLOCK_H
#define BLOCK_H


#include<iostream>
#include<SDL.h>

using namespace std;
struct block
{
    int z;
    block();
    int x,y;
    SDL_Rect blockRect;
    void updatePos();
};

#endif // BLOCK_H
