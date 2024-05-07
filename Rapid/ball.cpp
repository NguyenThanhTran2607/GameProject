#include "ball.h"


ball::ball(){
    idle = true;

    x = 200;
    y = 200;
    ballRect = {x, y, 16, 16};
}

void ball::MoveLeft(){
    if(x >= 0){
        x -= 6;
    }
}

void ball::MoveRight(){
    if(x < 560){
        x += 6;
    }
}

void ball::getinput()
{
	SDL_Event event;
    while(SDL_PollEvent(&event)){
        if(event.type == SDL_KEYDOWN){
            switch(event.key.keysym.sym){
                case SDLK_a:
                    MoveLeft();
                    break;
                case SDLK_d:
                    MoveRight();
                    break;
                default:
                    break;
            }
        }
    }
}
void ball::ballup()
{
    ballRect.x = x;
    ballRect.y = y -= 4 * 2;
}
void ball :: isDie()
{
     ballRect.x = x;
	 ballRect.y = y -= 4 ;
}

void ball::setdesrect() {
    ballRect.x = x;
	ballRect.y = y += 4;
}
