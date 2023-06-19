#include "Wall.h";

Wall::Wall(Vector2f position, String imagePath) :Entity(imagePath) {
	init();
	setPosition(position);
	width = 32;
	height = 32;
	setName("wall");

}
void Wall::init() {
	Image image;
	image.loadFromFile("images/brick.png");
	texture.loadFromImage(image);
	sprite.setTexture(texture);

}
