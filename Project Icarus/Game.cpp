#include "Game.h"
int ScreenWidth = 480;
int ScreenHeight = 640;
SDL_Window* window = NULL;
SDL_Surface* screenSurface = NULL;

void Game::run()
{
}

void Game::start()
{
}

void Game::setResolution(int width, int height)
{
	ScreenWidth = width;
	ScreenHeight = height;
}

void Game::setWindowTitle(std::string title)
{
}

Game::Game()
{
}


Game::~Game()
{
}

int Game::init()
{
	glewInit();
	//Initialize SDL 
	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
		return 1;
	}
	else { //Create window 
		window = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, ScreenWidth, ScreenHeight, SDL_WINDOW_SHOWN);
		if (window == NULL) {
			printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
			return 2;
		}
	}
	SDL_Delay(2000);
	return 0;
}

