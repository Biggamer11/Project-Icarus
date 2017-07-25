#include <iostream>
#include <string.h>
#include <cstdlib>
#include <fstream>
#include <glew.h>
#include <SDL.h>
#include "Game.h"

Game game;

using namespace std;

int main(int, char**)
{
	game.setResolution(1080,720);
	game.run();
		return 0;
}