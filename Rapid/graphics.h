#ifndef GRAPHICS_H_INCLUDED
#define GRAPHICS_H_INCLUDED

#include <SDL.h>
#include <SDL_image.h>
#include <string>
#include <vector>
#include <iostream>
#include <stdio.h>
#include <ctime>
#include <SDL_ttf.h>

using namespace std;

const string WINDOW_TITLE = "Rapid Roll";
const int SCREEN_WIDTH = 600;
const int SCREEN_HEIGHT = 750;
void logSDLError(std::ostream& os,const std::string &msg, bool fatal = false);
void quitSDL(SDL_Window* window, SDL_Renderer* renderer);
void waitUntilKeyPressed();
SDL_Texture* loadTexture( std::string path ,SDL_Renderer* renderer);
void renderTexture(SDL_Texture *tex, SDL_Renderer *ren, int x, int y);
void renderTexture(SDL_Texture *tex, SDL_Renderer *ren, int x, int y, int w, int h);


#endif // GRAPHICS_H_INCLUDED
