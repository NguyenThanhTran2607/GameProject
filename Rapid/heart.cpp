#include "heart.h"

heart::heart()
{
    heartRect.x = 10;
    heartRect.y = 10;
    heartRect.w = 16;
    heartRect.h = 16;
}

void heart::updatePos(){
    heartRect.x += 0;
    heartRect.y -= 4;
}
