#include "block.h"
block::block()
{
    blockRect.x =  (rand() % 11 * 50);
    blockRect.y = 830;
    blockRect.w = 100;
	blockRect.h = 20;
}

void block:: updatePos()
{
   blockRect.x += 0;
   blockRect.y -= 4;
}
