#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;

class Entity
{
protected:
	Vector2f position;
	Sprite sprite;
	Texture texture;
	virtual void  init();
	int width = 32;
	int height = 32;
	String imagePath;
	String name;
public:
	Entity(String imagePath);
	void setPosition(Vector2f position);
	void setTextureRect(IntRect rect);
	void setWidth(int width);
	void setHeight(int height);
	Sprite getSprite();
	int getWidth();
	int getHeight();
	void setImagePath(String imagePath);
	Vector2f getPosition();
	String getImagePath();
	void setName(String name);
	String getName();
	virtual void update();
};
