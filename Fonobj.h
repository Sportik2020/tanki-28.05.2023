#pragma once
#include <SFML/Graphics.hpp>"
#include "GameObj.h"
class Fonobj : public GameObj {
private:
public:
	Fonobj() {
		texture.loadFromFile(Fon_File_Name);
		sprite.setTexture(texture);
		sprite.setPosition(0, 0);
	}
	virtual void draw(sf::RenderWindow& window) {};
	virtual void update() {};
};