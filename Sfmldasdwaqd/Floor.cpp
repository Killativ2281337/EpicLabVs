#include "Floor.h";

Floor::Floor(Vector2f position, String imagePath) :Entity(imagePath) {
	init();
	setPosition(position);
	width = 32;
	height = 32;
	setName("floor");

}
void Floor::init() {
	Image image;
	image.loadFromFile("images/floor.png");
	sprite.setTexture(texture);

}
