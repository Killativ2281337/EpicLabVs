#include "HP.h";

HP::HP(Vector2f position, String imagePath) :Entity(imagePath) {
	init();
	setPosition(position);
	width = 32;
	height = 32;
}
void HP::init() {
	Image image;
	image.loadFromFile("images/hp.png");
	texture.loadFromImage(image);
	sprite.setTexture(texture);
	setName("hp");

}
