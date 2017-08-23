#pragma once
#include<SFML\Graphics.hpp>
#include "Bob.h"

class Engine
{
private:

     //regular Renderwindow  
    sf::RenderWindow m_Window;

    //Declare a sprite and a Texture for the background
    sf::Sprite m_BackgroundSprite;
    sf::Texture m_BackgroundTexture;

    //Instance of Bob
    Bob m_Bob;

    //Private functions for internal use only
    void input();
    void update(float dtAsSeconds);
    void draw();

public:
    
    //The Engine constructor
    Engine();

    // start will call all the private functions
    void start();
};

