#pragma once
#include <SFML/Graphics.hpp>
#include "player.h"
#include "Money.h"
#include "HP.h";
#include "Wall.h";
#include "Floor.h";
#include <list>;
#include "Ranger.h";

using namespace sf;
using namespace std;

const int WINDOW_WIDTH = 1260;
const int WINDOW_HEIGHT = 720;

const int WIDTH_MAP = 21;
const int HEIGHT_MAP = 12;

class Map {
public:
	Map();
	void draw(RenderWindow& widow);
	Player* getPlayer();
	void update();

private:
	Player* player;
	list<Entity*> entities;

	sf::String TileMap[HEIGHT_MAP] = {
		"kkkkkkkkkkkkkkkkkkkkk",
		"kggggggggmgggrkgmkgmk",
		"kgggggggggggggkggkggk",
		"kgggggkkkkkgggkggkggk",
		"kkkkkkkgmgkgggkggkggk",
		"kgggggggggkgggkggkggk",
		"kgggggggggkgggkggkggk",
		"kggkkkkkkkkgggkggkggk",
		"kggggggrgggggggggkggk",
		"kggggggmgggggggmggggk",
		"kggggggggggggggggggrk",
		"kmgkkkkkkkkkkkkkkkkkk"

	};
	


	void init();

};