#pragma once
#include "gridSquare.h"

class gameGrid
{
	gridSquare theGrid[10][10];
public:
	void renderGrid(sf::RenderWindow &mainWindow);
	void resetGrid();
	gameGrid(void);
	~gameGrid(void);
};

