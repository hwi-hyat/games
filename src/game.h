#pragma once

class game
{
    private:
        //window

        unsigned int board_size_x;
        unsigned int board_size_y;

    public:
        game();
        game(unsigned int board_size_x, unsigned int board_size_y);
        ~game();

        //setter
        void set_board_size_x(unsigned int board_size_x);
        void set_board_size_y(unsigned int board_size_y);

        //getter
        unsigned int get_board_size_x() const;
        unsigned int get_board_size_y() const;
        
}