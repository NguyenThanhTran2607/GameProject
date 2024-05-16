#ifndef GAME_H
#define GAME_H

#include "SDL_ttf.h"

#include "graphics.h"
#include "block.h"
#include "ball.h"
#include "heart.h"
#include <SDL_mixer.h>
#include <bits/stdc++.h>

struct game
{
    SDL_Renderer* renderer;
    SDL_Window* window;

    SDL_Texture* background;

    vector<block> _block1;
    vector<block> _block2;

    vector<heart> _heart;

    SDL_Texture* block1;
    SDL_Texture* block2;

    SDL_Texture* Ball;

    SDL_Texture* heart_ball;

    SDL_Texture* Menu;

    ball _ball;

    bool start = true;
    bool menu1 = true;
    bool menu2 = false;

    bool playing = false;
    bool ball_up = false;

    void init();
    void draw();
    void gameloop();
    void Resrest();


    bool die = false;
    bool die_heart  = false;
    bool _move = true;
    bool _choose = true;


    int n = 10;
    int count_ = -1;
    int a = 15, b = 5;

    int xm, ym;


    int health = 1;
    const int MAX_HEALTH = 5;
    int score = 0;


    void drawMenu1();
    void drawMenu2();

    SDL_Rect MENU[3];
	SDL_Surface* PlaySurface;
	SDL_Texture* PlayTexture;
	string play;


	SDL_Surface* quitSurface;
	SDL_Texture* quitTexture;
	string quit;
	//heart
	SDL_Surface* healthSurface;
	SDL_Texture* healthTexture;
	SDL_Rect Health;
	string str_health;

	TTF_Font* gFont;
	TTF_Font* Font;
	SDL_Color textColor;

	SDL_Surface* textSurface;
	SDL_Texture* mTexture;
	string str_score;
	SDL_Rect scoreBOX;


	bool sound = true;
	Mix_Music* Music;


};

#endif // GAME_H
