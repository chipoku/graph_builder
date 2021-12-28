#include <iostream>
#include <SFML/Graphics.hpp>
#include "graph_builder.h"
#include "objects/line.h"

/*
class graph_builder {
public:
	sf::RenderWindow &window;
	const sf::Vector2f line_x_size = sf::Vector2f(window.getSize().x, 2);
	const sf::Vector2f line_x_pos = sf::Vector2f(0, window.getSize().y/2);
	const sf::Vector2f line_y_size = sf::Vector2f(window.getSize().x, 2);
	const sf::Vector2f line_y_pos = sf::Vector2f(window.getSize().x/2, 0);
	

	sf::RectangleShape line_x() {
		sf::RectangleShape line(line_x_size);
		line.move(line_x_pos);
		line.setFillColor(sf::Color(0, 0, 0));

		return line;
	}

	sf::RectangleShape line_y() {
		sf::RectangleShape line(line_y_size);
		line.move(line_y_pos);
		line.setFillColor(sf::Color(0, 0, 0));
		line.rotate(90.f);

		return line;
	}

};
*/

int main() {
	graph_builder gb;

	line line;
	line.window.close();
	while (gb.window.isOpen()) {
		sf::Event event;
		while (gb.window.pollEvent(event)) {
			if(event.type == sf::Event::Closed)
				gb.window.close();
		}
		
		gb.window.clear(sf::Color::White);

		gb.window.draw(line.line_x());
		gb.window.draw(line.line_y());

		gb.window.display();
	}
	


    return 0;
}