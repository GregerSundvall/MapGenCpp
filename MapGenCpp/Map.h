#pragma once
#include <iostream>
#include <vector>

#include "Door.h"
#include "Room.h"

class Map
{
    int width;
    int height;

    std::vector<Room> rooms;
    std::vector<Door> doors;
    std::vector<std::vector<char>> map;

    
public:
    Map(int width, int height)
    {
        this->width = width;
        this->height = height;

        FillMapWith('X');
    }

    void FillMapWith(char character)
    {
        for (int w = 0; w < width; ++w)
        {
            std::vector<char> vector;
            for (int h = 0; h < height; ++h)
            {
                vector.push_back(character);
            }
            map.push_back(vector);
        }
    }
    
    void PrintMapToConsole()
    {
        for (int h = 0; h < height; ++h)
        {
            for (int w = 0; w < width; ++w)
            {
                std::cout << map[w][h];
            }
            std::cout << std::endl;
        }
    }
    
};
