#include "Map.h"

void Map::init() {
	player = new Player(Vector2f(140,140),"images/player1.png");
	player->setPosition(Vector2f(140, 140));
	for (int i = 0; i < HEIGHT_MAP; i++) {
		for (int j = 0; j < WIDTH_MAP; j++) {
			if (TileMap[i][j] == 'm') {
				Floor* floor = new Floor(Vector2f(j * 60, i * 60), "images/floor.png");
				entities.push_back(floor);
				Money* money = new Money(Vector2f(j * 60, i * 60), "images/coin.png");
				entities.push_back(money);
			}
			if (TileMap[i][j] == 'g') {
				Floor* floor = new Floor(Vector2f(j * 60, i * 60), "images/floor.png");
				entities.push_back(floor);
			}
			if (TileMap[i][j] == 'k') {
				Wall* wall = new Wall(Vector2f(j * 60, i * 60), "images/brick.png");
				entities.push_back(wall);
			}
			if (TileMap[i][j] == 'h') {
				Floor* floor = new Floor(Vector2f(j * 60, i * 60), "images/floor.png");
				entities.push_back(floor);
				HP* hp = new HP(Vector2f(j * 60, i * 60), "images/hp.png");
				entities.push_back(hp);
			}
			if (TileMap[i][j] == 'r') {
				Floor* floor = new Floor(Vector2f(j * 60, i * 60), "images/floor.png");
				entities.push_back(floor);
				Ranger* ranger = new Ranger(Vector2f(j * 60, i * 60), "images/ranger.png");
				entities.push_back(ranger);
				entities.push_back(ranger->getArrow());
			}
		}
	}


}
Map::Map() {
	init();

}
void Map::update() {
	int coinsCounter = 0;
	player->update();
	for (auto it = entities.begin(); it != entities.end(); it++) {
		if ((*it)->getName() == "ranger") {
			(*it)->update();
			Ranger* ranger = (Ranger*)(*it);
			ranger->collision(entities);
		}
	}
	for (auto it = entities.begin(); it != entities.end(); it++){
		FloatRect playerColider = player->getSprite().getGlobalBounds();
		FloatRect otherColider = (*it)->getSprite().getGlobalBounds();
		if (playerColider.intersects(otherColider) && (*it)->getName() == "money") {
			entities.erase(it++);
			player->setCoins(player->getCoins() + 1);
			coinsCounter++;
		}
		if (playerColider.intersects(otherColider) && (*it)->getName() == "hp") {
			entities.erase(it++);
		}
		if (playerColider.intersects(otherColider) && (*it)->getName() == "wall") {
			player->setSpeed(Vector2f(-player->getSpeed().x, -player->getSpeed().y));
			player->update();
		}
		if ((*it)->getName() == "ranger") {
			it++;
			Ranger* ranger = (Ranger*)(*it);
			ranger->collision(entities);
			Arrow* arrow = ranger->getArrow();
			FloatRect arrowColider = arrow->getSprite().getGlobalBounds();
			if (playerColider.intersects(arrowColider)) {
				player->setState("loose");
			}
		}
		if (coinsCounter == 0) {
			player->setState("win");
		}

	}
}
Player* Map::getPlayer() {
	return player;
}
void Map::draw(RenderWindow& window) {
	for (auto it = entities.begin(); it != entities.end(); it++) {
		window.draw((*it)->getSprite());
	}
	window.draw(player->getSprite());

}
