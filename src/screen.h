#include <SFML/Graphics.hpp>
#include <vector>

class Screen
{
    private:
        int pixel_size;
        int board_width;
        int board_height;
        int window_width;
        int window_height;

    public:
        Screen() = delete;
        sf::RenderWindow window;
        Screen(int pixel_size, int board_width, int board_height);

        void draw(std::vector<std::vector<int>> board);
        
};

Screen::Screen(int pixel_size, int board_width, int board_height):
    pixel_size(pixel_size),
    board_width(board_width),
    board_height(board_height),
    window_width(board_width * pixel_size),
    window_height(board_height * pixel_size),
    window(sf::VideoMode(window_width, window_height), "32x32 Board")
{
}

void Screen::draw(std::vector<std::vector<int>> board)
{
    sf::RectangleShape rectangle(sf::Vector2f(pixel_size, pixel_size));
    rectangle.setFillColor(sf::Color::White);

    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board.size(); j++)
        {
            if (board[i][j] == 1)
            {
                rectangle.setPosition(i * pixel_size, j * pixel_size);
                window.draw(rectangle);
            }
        }
    }

    window.display();
}