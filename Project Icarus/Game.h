#pragma once
#include <glew.h>
#include <SDL.h>
#include <cstdlib>
#include <iostream>
#include <string>

class Game
{

public:
	void start();
	//Mutators
	void setResolution(int width, int height);
	void setWindowTitle(std::string title);
	//Constructors & Deconstructors
	Game();
	virtual ~Game();

private:
	void run();
};


