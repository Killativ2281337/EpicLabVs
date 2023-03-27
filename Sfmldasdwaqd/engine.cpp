#include "engine.h"
Engine::Engine(){
    init();

}

void Engine::init(){
    window.create(sf::VideoMode(1260,720),"Game");
}

void Engine::loop() {
    while (window.isOpen()){
        Event event;
        while (window.pollEvent(event)){
            if (event.type == Event::Closed){
                window.close();
            }
        }
        draw();
        
    }
    
}

void Engine::draw() {
    window.clear(Color(0,255,0));
    window.draw(player.getSprite());
    window.display();
}