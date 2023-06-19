#include "player.h"
#include "Map.h"

Player::Player(Vector2f position, String imagePath):MoveEntity(position,imagePath) {
	init();
}

void Player::init() {
	setTextureRect(IntRect(0, 0, 80, 120));
	width = 80;
	height = 120;
	setName("Player");
}
void Player::setCoins(int coins) {
	this->coins = coins;
}
int Player::getCoins() {
	return coins;
}
void Player::setState(String state) {
	this->state = state;
}
String Player::getState() {
	return state;
}