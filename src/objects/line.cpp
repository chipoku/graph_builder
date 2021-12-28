#include "line.h"


line::line(){window.close();}; // yeah, fucking crutches

sf::RectangleShape line::line_x() {
    sf::RectangleShape line(line_x_size);
	line.move(line_x_pos);
	line.setFillColor(sf::Color(0, 0, 0));

	return line;
};

sf::RectangleShape line::line_y() {
	sf::RectangleShape line(line_y_size);
	line.move(line_y_pos);
	line.setFillColor(sf::Color(0, 0, 0));
	line.rotate(90.f);

	return line;
};

