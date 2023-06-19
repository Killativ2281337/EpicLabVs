#pragma once
#include <SFML/Graphics.hpp>
#include "Entity.h"

using namespace sf;

class HP :public Entity {
private:
	void  init();
public:
	HP(Vector2f position, String imagePath);

};