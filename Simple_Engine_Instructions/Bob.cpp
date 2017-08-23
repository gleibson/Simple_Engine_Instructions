#include "Bob.h"

Bob::Bob()
{
    //How fast bob moves
    m_speed = 400;
    
    //Associate a texture with the sprite
    m_texture.loadFromFile("bob.png");
    m_sprite.setTexture(m_texture);

    //Set Start Position
    m_Position.x = 200;
    m_Position.y = 400;
}

//Make private sprite available to draw() Function
sf::Sprite Bob::getSprite()
{
    return m_sprite;
}

void Bob::moveLeft()
{
    m_LeftPressed = true;
}

void Bob::moveRight()
{
    m_RightPressed = true;
}

void Bob::stopLeft()
{
    m_LeftPressed = false;
}

void Bob::stopRight()
{
    m_RightPressed = false;
}

void Bob::update(float elapsedTime)
{
    if (m_RightPressed)
    {
        m_Position.x += m_speed * elapsedTime;
    }
    if (m_LeftPressed)
    {  
        m_Position.x += m_speed * elapsedTime;
    }
    //New Position
    m_sprite.setPosition(m_Position);
}