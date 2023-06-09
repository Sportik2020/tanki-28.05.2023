#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"

class TextObj_Pl_2 : public GameObj {
private:
public:
	TextObj_Pl_2(std::string str, sf::Vector2f pos) {
		font.loadFromFile("arial.ttf");
		text.setString(str);
		text.setFillColor(sf::Color::Blue);
		text.setOutlineThickness(2);
		text.setOutlineColor(sf::Color::Black);
		text.setFont(font);
		text.setCharacterSize(CHAR_SIZE);
		text.setPosition(pos);
	}
	void update(std::string str) {
		text.setString(str);
	}

	void draw(sf::RenderWindow& window) {
		window.draw(text);
	}
};