#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include "gameGrid.h"


sf::RenderWindow mainWindow;
gameGrid playingGrid;

int main() {
	mainWindow.create(sf::VideoMode(500,500), "Turblox");
	while (mainWindow.isOpen()) {
		sf::Event event;
		while (mainWindow.pollEvent(event))
			{
				if (event.type == sf::Event::Closed) mainWindow.close();
			}	
		mainWindow.clear();
		playingGrid.renderGrid(mainWindow);
		mainWindow.display();
	}
}