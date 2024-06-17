#include <SFML/Graphics.hpp>

int main()
{
    //Defined video mode (dimensions)
    sf::VideoMode videoMode = sf::VideoMode( 800,600 );

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
        sf::CircleShape circle(60); // The radius of this circle is set to 50
            circle.setFillColor(sf::Color::Green); //The color of this circle is red
            circle.setPosition(200, 150); //Set position on screen
            window.draw(circle);

        // Drawing a red square
        sf::CircleShape square(80.f, 4);
            square.setFillColor(sf::Color::Red);
            square.setPosition(20, 20);
            window.draw(square);

        // Drawing a blue triangle
            sf::CircleShape triangle(40.f, 3);
            triangle.setFillColor(sf::Color::Blue);
            triangle.setPosition(100, 200);
            window.draw(triangle);

        //Display whatever you draw
        window.display();
    }
    return 0;
}