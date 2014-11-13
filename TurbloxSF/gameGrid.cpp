#include "gameGrid.h"


gameGrid::gameGrid(void)
{
	resetGrid();
}


gameGrid::~gameGrid(void)
{
}

void gameGrid::renderGrid(sf::RenderWindow &mainWindow)
{
	for (int x = 0; x <= 9; x++) {
		for (int y = 0; y <= 9; y++) {
			theGrid[x][y].draw(mainWindow);
		}
	}
}

void gameGrid::resetGrid()
{
	for (int x = 0; x <= 9; x++) {
		for (int y = 0; y <= 9; y++) {
			theGrid[x][y].setColor(sf::Color::White);
			theGrid[x][y].setXasGrid(x);
			theGrid[x][y].setYasGrid(y);
		}
	}
}