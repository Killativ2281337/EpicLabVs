#include"Move.h"
Move::Move(){
	
}

void Move::setPlayer(Player* player) {
	this->player = player;
}
void Move::action() {
	if (Keyboard::isKeyPressed(Keyboard::Right)) {
		player->setSpeed(Vector2f(0.5, 0));
		player->setTextureRect(IntRect(int(player->currentFrame) * 80, 3 * 120, 80, 120));
	}
	
	else if (Keyboard::isKeyPressed(Keyboard::Left)){
		player->setSpeed(Vector2f(-0.5, 0));
		player->setTextureRect(IntRect(int(player->currentFrame) * 80, 2 * 120, 80, 120));
	}
	else if (Keyboard::isKeyPressed(Keyboard::Up)) {
		player->setSpeed(Vector2f(0, -0.5));
		player->setTextureRect(IntRect(int(player->currentFrame) * 80, 1 * 120, 80, 120));
	}
	else if (Keyboard::isKeyPressed(Keyboard::Down)) {
		player->setSpeed(Vector2f(0, 0.5));
		player->setTextureRect(IntRect(int(player->currentFrame) * 80, 0 * 120, 80, 120));
	}
	else {
		player->setSpeed(Vector2f(0, 0));
	}
}