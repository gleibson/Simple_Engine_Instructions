#pragma once
#include <SFML/Graphics.hpp>

class Bob 
{
    //All the variables to be acessed internally
private:

    //Position start Bob
    sf::Vector2f m_Position;
    
    //Sprite
    sf::Sprite m_sprite;

    sf::Texture m_texture;

    //Which direction currently moving in
    bool m_LeftPressed;
    bool m_RightPressed;
   
    //Pixels per Second
    float m_speed;


//Public functions

public:

    //Bob constructor
    Bob();

    //copy of the sprite to main
    sf::Sprite getSprite();

    //Moving specific direction
    void moveLeft();

    void moveRight();

    //Stoping specific direction
    void stopLeft();

    void stopRight();

    //Function called once every frame
    void update(float elapsedTime);

};

