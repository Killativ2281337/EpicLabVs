#pragma once
#include <SFML/Graphics.hpp>
#include"Entity.h"

using namespace sf;
class MoveEntity:public Entity {
protected:
	Vector2f speed;
    void dontMoveBehindMap();
public:
	MoveEntity(Vector2f position, String imagePath);
    void setPosition(Vector2f pos);
    void setTextureRect(IntRect rect);
    Vector2f getPosition();
    Sprite getSprite();
    void setSpeed(Vector2f speed);
    Vector2f getSpeed();
    float currentFrame = 0;
    void update();
    void setWidht(int width);
    void setHeight(int height);
    int getWidth();
    int getHeight();

};