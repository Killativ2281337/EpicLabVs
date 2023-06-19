#pragma once
#include <SFML/Graphics.hpp>
#include "player.h"
using namespace sf;

class Move {
	private:
		Player* player;
	public:
		Move();
		void setPlayer(Player* player);
		void action();

};