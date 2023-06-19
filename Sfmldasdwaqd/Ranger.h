#pragma once
#include <SFML/Graphics.hpp>
#include"Entity.h"
#include<list>
#include<iostream>
#include "Arrow.h"
using namespace sf;
using namespace std;

class Ranger :public Entity {
private:
	bool isShot = false;
	Arrow* arrow;
	float currentFrame = 4;
	void init();
	void animation();
	void shoot();
public:
	Ranger(Vector2f position, String imagePath);
	void collision(list<Entity*>entities);
	void update();
	Arrow* getArrow();
	
};

