#ifndef BALL_H
#define BALL_H

#include <iostream>
#include <SDL.h>

using namespace std;


struct ball
{
    ball();

    int x;
    int y;

    SDL_Rect ballRect;

    void MoveLeft();
    void MoveRight();

    void ballup();
    void setdesrect();
    void getinput();

    bool idle;
    void isDie();
};

#endif // BALL_H
