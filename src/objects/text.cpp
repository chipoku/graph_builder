#include "text.h"

text::text() {
    window.close();
    if (font.loadFromFile("../lib/Fonts/font.ttf")) {
        text_block.setFont(font);
        text_block.setFillColor(sf::Color(0, 0, 0));
        text_block.setCharacterSize(24);
        text_block.setPosition(sf::Vector2f((window.getPosition().x/2+10),
                                            (window.getPosition().y/2+10)));
        text_block.setString("X");
    }
};

text::draw_text() {};

text::~text() {};
