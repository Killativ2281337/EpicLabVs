#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Player{
    private:
    Vector2f position;
    Sprite sprite;
    Texture texture;
    void init();
    public:
    Player();
    void setPosition(Vector2f pos);
    void setTextureRect(IntRect rect);
    Vector2f getPosition();
    Sprite getSprite();
};