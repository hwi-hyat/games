#include <SFML/Graphics.hpp>

int main() {
    const int pixelSize = 20; // Size of each square pixel
    const int boardWidth = 32;
    const int boardHeight = 32;
    const int windowWidth = boardWidth * pixelSize;
    const int windowHeight = boardHeight * pixelSize;

    // Create the main window
    sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "32x32 Board");

    // Create a white square (pixel)
    sf::RectangleShape rectangle(sf::Vector2f(pixelSize, pixelSize));
    rectangle.setFillColor(sf::Color::White);

    // Set the position of the square (for example, at cell (10, 10) on the board)
    rectangle.setPosition(10 * pixelSize, 10 * pixelSize);

    // Start the game loop
    while (window.isOpen()) {
        // Process events
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clear screen
        window.clear();

        // Draw the white square
        window.draw(rectangle);

        // Update the window
        window.display();
    }

    return 0;
}