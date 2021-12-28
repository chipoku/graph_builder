#ifndef LINE_H
#define LINE_H

#include "graph_builder.h"


class line : public graph_builder {
private:
    const sf::Vector2f line_x_size = sf::Vector2f(window.getSize().x, 2);
    const sf::Vector2f line_x_pos = sf::Vector2f(0, window.getSize().y/2);
	const sf::Vector2f line_y_size = sf::Vector2f(window.getSize().x, 2);
	const sf::Vector2f line_y_pos = sf::Vector2f(window.getSize().x/2, 0);

public:
    line();

    sf::RectangleShape line_x();// DST here
    sf::RectangleShape line_y();
};

#endif