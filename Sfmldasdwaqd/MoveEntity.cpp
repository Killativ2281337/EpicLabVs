#include "MoveEntity.h"
#include "Map.h"

MoveEntity::MoveEntity(Vector2f postion, String imagePath) :Entity(imagePath) {
	setPosition(position);
}
void MoveEntity::setSpeed(Vector2f speed) {
	this->speed = speed;
}

Vector2f MoveEntity::getPosition() {
	return sprite.getPosition();
}
void MoveEntity::setPosition(Vector2f pos) {
	position = pos;
	sprite.setPosition(position.x, position.y);

}

Sprite MoveEntity::getSprite() {
	return sprite;
}
void MoveEntity::setTextureRect(IntRect rect) {
	sprite.setTextureRect(rect);
}

Vector2f MoveEntity::getSpeed() {
	return speed;
}

void MoveEntity::update() {
	sprite.move(speed.x, speed.y);
	position = sprite.getPosition();
	dontMoveBehindMap();
}

void MoveEntity::setWidht(int width) {
	this->width = width;
}
void MoveEntity::setHeight(int height) {
	this->height = height;
}
int MoveEntity::getWidth() {
	return width;
}
int MoveEntity::getHeight() {
	return height;
}
void MoveEntity::dontMoveBehindMap() {
	if (position.x > WINDOW_WIDTH - width) {
		position.x = WINDOW_WIDTH - width;
	}
	if (position.x < 0) {
		position.x = 0;
	}
	if (position.y > WINDOW_HEIGHT - height) {
		position.y = WINDOW_HEIGHT - height;
	}
	if (position.y < 0) {
		position.y = 0;
	}
	setPosition(Vector2f(position.x, position.y));
}