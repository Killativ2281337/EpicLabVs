#pragma once
#include <SFML/Graphics.hpp>
#include "MoveEntity.h"

using namespace sf;

class Player:public MoveEntity {
    private:
    void init();
    int coins = 0;
    String state = "start";
    public:
    Player(Vector2f position, String imagePath);
    int getCoins();
    void setState(String state);
    void setCoins(int coins);
    String getState();

};
