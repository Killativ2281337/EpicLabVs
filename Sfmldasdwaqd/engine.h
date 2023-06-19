#pragma once
#include <SFML/Graphics.hpp>
#include "Map.h"
#include "Move.h"
#include "Camera.h"

using namespace sf;

class Engine{
    public:
    RenderWindow window;
    Engine();
    void init();
    void loop();
    void draw();
    Map map;
    Move pressedAction;
    void update();
    Camera* camera;



};

