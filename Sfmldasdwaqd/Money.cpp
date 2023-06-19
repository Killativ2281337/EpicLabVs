#include "Money.h";

Money::Money(Vector2f position, String imagePath):Entity(imagePath) {
	init();
	setPosition(position);
	width = 32;
	height = 32;
	setName("money");

}
void Money::init() {
	Image image;
	image.loadFromFile("images/coin.png");
	texture.loadFromImage(image);
	sprite.setTexture(texture);

}
