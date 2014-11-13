#include "gridSquare.h"


gridSquare::gridSquare(void)
{
	sf::Vector2f size(18.f,18.f);
	squareRect.setSize(size);
}


gridSquare::~gridSquare(void)
{
}

void gridSquare::draw(sf::RenderWindow &mainWindow) {
	mainWindow.draw(squareRect);
}

void gridSquare::setXasGrid(int x) {
	squareGridX = x;
	squareSpaceX = x*20;
	squareRect.setPosition(squareSpaceX,squareSpaceY);
}
void gridSquare::setXasSpace(int x) {
	squareGridX = x/20;
	squareSpaceX = x;
	squareRect.setPosition(squareSpaceX,squareSpaceY);
}
void gridSquare::setYasGrid(int y) {
	squareGridY = y;
	squareSpaceY = y*20;
	squareRect.setPosition(squareSpaceX,squareSpaceY);
}
void gridSquare::setYasSpace(int y) {
	squareGridY = y/20;
	squareSpaceY = y;
	squareRect.setPosition(squareSpaceX,squareSpaceY);
}

void gridSquare::setColor(sf::Color color) {
	squareRect.setFillColor(color);
}
