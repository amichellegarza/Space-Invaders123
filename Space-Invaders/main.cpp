#include <SFML/Graphics.hpp>

int main()
{
    //Defined video mode (dimensions)
    sf::VideoMode videoMode = sf::VideoMode( 1000,1000 );

    //Create a window object with specific dimensions and a title
    sf::RenderWindow window( videoMode, "My SFML Window" );

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event))
        {
            //Check for window closure
            if (event.type == sf::Event::Closed)
                window.close();
        }
        // Clear the window
        window.clear(sf::Color::Black);

        // Drawing a green circle 
            sf::CircleShape circle(30); // The radius of this circle is set to 50
            circle.setFillColor(sf::Color::Green); //The color of this circle is red
            circle.setPosition(900, 100); //Set position on screen
            window.draw(circle);

        // Drawing a red square
            sf::CircleShape square(80.f, 4);
            square.setFillColor(sf::Color::Red);
            square.setPosition(300, 20);
            square.setRotation(45);
            window.draw(square);

        // Drawing a blue triangle
            sf::CircleShape triangle(40.f, 3);
            triangle.setFillColor(sf::Color::Blue);
            triangle.setPosition(200, 200);
            window.draw(triangle);

        // Drawing the Outscal texture
            sf::Texture outscal_texture;
            outscal_texture.loadFromFile("assets/textures/outscal_logo.png");

        // Drawing the Outscal sprite
            sf::Sprite outscal_sprite;
            outscal_sprite.setTexture(outscal_texture);
            outscal_sprite.setPosition(400, 100);
            outscal_sprite.setRotation(45);
            outscal_sprite.setScale(0.5, 0.5);
            window.draw(outscal_sprite);

        // Drawing font
            sf::Font font;
            font.loadFromFile("assets/fonts/OpenSans.ttf");
            sf::Text text("SFML is awesome!", font, 50);
            text.setFillColor(sf::Color::White);
            window.draw(text);

        //Display whatever you draw
        window.display();
    }
    return 0;
}