#pragma once
#include <SFML/Graphics.hpp>
#include "player.h"

using namespace sf;

class Engine{
    public:
    RenderWindow window;
    Engine();
    void init();
    void loop();
    Player player;
    void draw();
    

};

