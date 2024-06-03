#pragma once

#include <iostream>

class config
{
	private:
		unsigned int pixel_size;
		unsigned int window_size_x;
		unsigned int window_size_y;

	public:
		config(unsigned int pixel_size, unsigned int window_size_x, unsigned int window_size_y);
		~config();
		
		config() = delete;
		config(const config& other) = delete;
		config& operator=(const config& other) = delete;

		// setters
		void set_pixel_size(unsigned int pixel_size);
		void set_window_size_x(unsigned int window_size_x);
		void set_window_size_y(unsigned int window_size_y);

		// getters
		unsigned int get_pixel_size() const;
		unsigned int get_window_size_x() const;
		unsigned int get_window_size_y() const;

		void print_config();
}