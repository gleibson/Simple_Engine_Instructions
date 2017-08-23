#include "Engine.h"

Engine::Engine()
{
    //Get the screen resolution and create an SFML window and View
    sf::Vector2f resolution;
    resolution.x = sf::VideoMode::getDesktopMode().width;
    resolution.y = sf::VideoMode::getDesktopMode().height;

    m_Window.create(sf::VideoMode(resolution.x, resolution.y), "Simple_Engine_Instructions", sf::Style::Fullscreen);

    //Load the background int the texture
    m_BackgroundTexture.loadFromFile("background.jpg");

    //Associate the sprite with the texture
    m_BackgroundSprite.setTexture(m_BackgroundTexture);

}

void Engine::start()
{
    //Timing
    sf::Clock clock;

    while (m_Window.isOpen())
    {
        //Restart the clock and save the elapsed time into dt
        sf::Time dt = clock.restart();

        //Make a fraction from the delta time
        float dtAsSeconds = dt.asSeconds();

        input();
        update(dtAsSeconds);
        draw();
        
     }

}

void Engine::input()
{
    //Handle the player quitting 
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
    {
        m_Window.close();
    }
    //Handle player moving
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        m_Bob.moveLeft();
    }
    else
    {
        m_Bob.stopLeft();
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        m_Bob.moveRight();
    }
    else
    {
        m_Bob.stopRight();
    }
}


