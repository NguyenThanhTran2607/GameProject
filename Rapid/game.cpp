#include "game.h"

void game::init(){
    SDL_Init(SDL_INIT_EVERYTHING);
    TTF_Init();

    window = NULL;
    window = SDL_CreateWindow(WINDOW_TITLE.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

    renderer = NULL;
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    background = IMG_LoadTexture(renderer, "background.png");

    block1 = IMG_LoadTexture(renderer, "block1.png");
    block2 = IMG_LoadTexture(renderer, "block2.png");

    Ball = IMG_LoadTexture(renderer, "ball.png");

    heart_ball =  IMG_LoadTexture(renderer, "heart.png");

    Menu = IMG_LoadTexture(renderer, "_menu.png");

    gFont = TTF_OpenFont("font.ttf", 30);
	Font = TTF_OpenFont("ExtraFont.ttf", 40);
	textColor = { 0, 0, 0 };

	Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048);
	Music = Mix_LoadMUS("music.mp3");
}

void game::draw(){
    SDL_RenderClear(renderer);
    renderTexture(background, renderer, 0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);

    renderTexture(Ball, renderer, _ball.x, _ball.y, 16, 16);

    if(_move){
        _ball.getinput();
    }
    if(_choose == true){
        _ball.setdesrect();
    }
    count_++;
    int n = rand() % 4;
    int m = rand() % 10;

    if(count_ % a == 0){
        if(n == 2 && _block1.size() < 5 && _block2.size() != NULL && count_ > 50){
            block __block1;
            _block1.push_back(__block1);
        }else {
            block __block2;
            _block2.push_back(__block2);
            if (m == 1)
			{
				heart __heart;
				__heart.heartRect.x = __block2.blockRect.x + 30;
				__heart.heartRect.y = __block2.blockRect.y - 20 ;
				_heart.push_back(__heart);
			}
        }
    }
    for (int i = 0; i < _block1.size(); i++)
	{

		if (_block1[i].blockRect.y < 80) {

			_block1.erase(_block1.begin() + i);
		}
	}

	for (int i = 0; i < _block2.size(); i++)
	{

		if (_block2[i].blockRect.y < 80) {

			_block2.erase(_block2.begin() + i);
		}
	}
	for (int i = 0; i < _heart.size(); i++)
	{

		if (SDL_HasIntersection(&_heart[i].heartRect, &_ball.ballRect)) {

			_heart.erase(_heart.begin() + i);
			if(health < MAX_HEALTH) health++;
		}
		if(_heart[i].heartRect.y < 80){
            _heart.erase(_heart.begin() + i);
		}
	}

	if(_ball.y > 720 || _ball.y < 80){
        _move = false;
        die_heart = true;
        health--;
        if(health > 0){
            SDL_Delay(1000);
            _ball.x = rand() % (SCREEN_WIDTH - 16);
            _ball.y = 200;
        }
	}else{
        _move = true;
        score++;
	}

	for (int i = 0; i < _block2.size(); i++)
	{
		if ((_ball.ballRect.x >= _block2[i].blockRect.x - 16) && (_ball.ballRect.x <= _block2[i].blockRect.x + 100)
                && (_ball.ballRect.y + 20 >= _block2[i].blockRect.y) && (_ball.ballRect.y + 16 <= _block2[i].blockRect.y)){
			ball_up = true;

		}
	}


	for (int i = 0; i < _block2.size(); i++)
	{
		_block2[i].updatePos();
		SDL_RenderCopy(renderer, block2, NULL, &_block2[i].blockRect);
		if(die){
            if(die_heart == false){
                _ball.ballup();
            }
            count_die++;
            if (count_die % 50 == 0) {
				_ball.x = _block2[b].blockRect.x + 30;
				_ball.y = _block2[b].blockRect.y - 100;
				health--;
			}
            die = false;
            _move = true;
		}
		if (ball_up)
		{
			_ball.ballup();
			ball_up = false;
		}
	}

	for (int i = 0; i < _block1.size(); i++)
	{
		_block1[i].updatePos();
		SDL_RenderCopy(renderer, block1, NULL, &_block1[i].blockRect);

		if ((_ball.ballRect.x >= _block1[i].blockRect.x - 30) && (_ball.ballRect.x <= _block1[i].blockRect.x + 100)
            && (_ball.ballRect.y + 20 >= _block1[i].blockRect.y) && (_ball.ballRect.y + 16 <= _block1[i].blockRect.y))
		{
			die = true;
			_move = false;

		}
	}
	for (int i = 0; i < _heart.size(); i++)
	{
		_heart[i].updatePos();
        SDL_RenderCopy(renderer, heart_ball, NULL, &_heart[i].heartRect);
	}

    str_score = "Score : ";
	str_score += to_string(score);
	textSurface = TTF_RenderText_Solid(gFont, str_score.c_str(), textColor);
	mTexture = SDL_CreateTextureFromSurface(renderer, textSurface);
	scoreBOX = { SCREEN_WIDTH - 200, 10 , textSurface->w, textSurface->h };
	SDL_RenderCopy(renderer, mTexture, NULL, &scoreBOX);

	str_health = "x ";
	str_health += to_string(health);
	healthSurface = TTF_RenderText_Solid(gFont, str_health.c_str(), textColor);
	healthTexture = SDL_CreateTextureFromSurface(renderer, healthSurface);
	Health = { 100, 10 , healthSurface->w, healthSurface->h };
	SDL_RenderCopy(renderer, healthTexture, NULL, &Health);



	renderTexture(heart_ball, renderer, 60, 20, 32, 32);

    SDL_RenderPresent(renderer);
}

void game::Resrest()
{
	_block1.erase(_block1.begin(), _block1.end());
	_block2.erase(_block2.begin(), _block2.end());
	_heart.erase(_heart.begin(), _heart.end());
	_ball.x = 200;
	_ball.y = 100;
	health = 1;
	score = 0;
}

void game::drawMenu1(){
    SDL_RenderClear(renderer);
    renderTexture(Menu, renderer, 0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);
    play = "PLAY";
    PlaySurface = TTF_RenderText_Blended(Font, play.c_str(), textColor);
    PlayTexture = SDL_CreateTextureFromSurface(renderer, PlaySurface);
    MENU[0] = {250, 120, PlaySurface->w, PlaySurface->h};
    SDL_RenderCopy(renderer, PlayTexture, NULL, &MENU[0]);

    quit = "QUIT";
	quitSurface = TTF_RenderText_Blended(Font, quit.c_str(), textColor);
	quitTexture = SDL_CreateTextureFromSurface(renderer, quitSurface);
	MENU[1] = { 250, 200, quitSurface->w, quitSurface->h };
	SDL_RenderCopy(renderer, quitTexture, NULL, &MENU[1]);
	SDL_RenderPresent(renderer);
}
void game::drawMenu2(){
    play = "PLAY AGAIN";
	PlaySurface = TTF_RenderText_Blended(Font, play.c_str(), textColor);
	PlayTexture = SDL_CreateTextureFromSurface(renderer, PlaySurface);
	MENU[0] = { 200, 300 , PlaySurface->w, PlaySurface->h };
	SDL_RenderCopy(renderer, PlayTexture, NULL, &MENU[0]);

	quit = "QUIT";
	quitSurface = TTF_RenderText_Blended(Font, quit.c_str(), textColor);
	quitTexture = SDL_CreateTextureFromSurface(renderer, quitSurface);
	MENU[1] = { 250, 370 , quitSurface->w, quitSurface->h };
	SDL_RenderCopy(renderer, quitTexture, NULL, &MENU[1]);
	SDL_RenderPresent(renderer);
}

void game::gameloop(){
    Mix_PlayMusic(Music, -1);

    SDL_Event e;
    while(start){
        SDL_Delay(40);
        if(menu1){
            drawMenu1();
        }
        if(menu2){
            drawMenu2();
        }
        else if(playing){
            draw();
        }
        if(health <= 0){
            Resrest();
            menu2 = true;
            playing = false;
            menu1 = false;
        }
        while(SDL_PollEvent(&e) == 1){
            if(menu1){
                switch(e.type){
                case SDL_QUIT:
                    quitSDL(window, renderer);
                case SDL_MOUSEBUTTONDOWN:
                    {

                        SDL_GetMouseState(&xm, &ym);
                        if (xm > 200 && xm < 350 && ym > 120 && ym < 170) {
                            menu1 = false;
                            playing = true;
                        }
                        //quit
                        if (xm > 250 && xm < 350 && ym > 200 && ym < 250) {
                            quitSDL(window, renderer);
                        }

                        break;
                    }
                }
            }
            if(menu2){
                switch (e.type)
				{
				case SDL_QUIT:
				{
					quitSDL(window, renderer);
				}
				case SDL_MOUSEBUTTONDOWN:
				{
					SDL_GetMouseState(&xm, &ym);
					//start
					if (xm > 200 && xm < 350 && ym > 300 && ym < 350) {
						playing = true;
						menu2 = false;
					}
					if (xm > 250 && xm < 420 && ym > 370 && ym < 420) {
						quitSDL(window, renderer);
					}
					break;
				}

				}
            }
        }
    }
    Resrest();
}

