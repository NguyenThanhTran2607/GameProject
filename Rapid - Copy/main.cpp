#include <iostream>
#include "game.h"

using namespace std;

int main(int argc, char* argv[]){
    game game;
    game.init();
    game.gameloop();
    SDL_Delay(1000);
    return 0;
}
