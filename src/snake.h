#pragma once



class snake
{
    private:
        //window

        unsigned int board_size_x;
        unsigned int board_size_y;

    public:
        snake();
        snake(unsigned int board_size_x, unsigned int board_size_y);
        ~snake();

        //setter
        void set_board_size_x(unsigned int board_size_x);
        void set_board_size_y(unsigned int board_size_y);

        //getter
        unsigned int get_board_size_x() const;
        unsigned int get_board_size_y() const;
        
}