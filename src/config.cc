#include "config.h"
#include <iostream>

config::config(unsigned int pixel_size, unsigned int window_size_x, unsigned int window_size_y)
    : pixel_size(pixel_size), window_size_x(window_size_x), window_size_y(window_size_y) 
{}

void config::set_pixel_size(unsigned int pixel_size)
{
    this->pixel_size = pixel_size;
}

void config::set_window_size_x(unsigned int window_size_x)
{
    this->window_size_x = window_size_x;
}

void config::set_window_size_y(unsigned int window_size_y)
{
    this->window_size_y = window_size_y;
}

unsigned int config::get_pixel_size() const
{
    return pixel_size;
}

unsigned int config::get_window_size_x() const
{
    return window_size_x;
}

unsigned int config::get_window_size_y() const
{
    return window_size_y;
}

void config::print_config()
{
    std::cout << "Pixel Size: " << pixel_size << std::endl;
    std::cout << "Window Size: " << window_size_x << " x " << window_size_y << std::endl;
}