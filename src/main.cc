#include <SFML/Graphics.hpp>
#include <vector>

class Game {
private:
    const int pixel_size;
    const int board_width;
    const int board_height;
    sf::RenderWindow window;
    sf::RectangleShape rectangle;

    void processEvents()
    {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                window.close();
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
                rectangle.move(-pixel_size, 0);
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
                rectangle.move(pixel_size, 0);
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
                rectangle.move(0, -pixel_size);
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
                rectangle.move(0, pixel_size);
        }

    }

    void update()
    {
        // Add game update logic here (if any)
    }

    void render()
    {
        window.clear();
        window.draw(rectangle);
        window.display();
    }

public:
    Game(int pixel_size, int board_width, int board_height)
        : pixel_size(pixel_size),
          board_width(board_width),
          board_height(board_height),
          window(sf::VideoMode(board_width * pixel_size, board_height * pixel_size), "32x32 Board"),
          rectangle(sf::Vector2f(pixel_size, pixel_size))
    {
        rectangle.setFillColor(sf::Color::White);
        rectangle.setPosition(10 * pixel_size, 10 * pixel_size);
    }

    void run()
    {
        while (window.isOpen()) {
            processEvents();
            update();
            render();
        }
    }
};

int main()
{
    const int pixel_size = 20;
    const int board_width = 32;
    const int board_height = 32;

    Game game(pixel_size, board_width, board_height);
    game.run();

    return 0;
}