#pragma once
#include <SFML/Graphics.hpp>

class gridSquare
{
	sf::Color squareColor;
	sf::RectangleShape squareRect;
	int squareGridX;
	int squareGridY;
	float squareSpaceX;
	float squareSpaceY;

public:
	void setXasGrid(int x);
	void setXasSpace(int x);
	void setYasGrid(int y);
	void setYasSpace(int y);
	void setColor(sf::Color color);
	void draw(sf::RenderWindow &mainWindow);
	gridSquare(void);
	~gridSquare(void);
};

