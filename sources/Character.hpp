#pragma once
#include "Point.hpp"
#include <string>
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

constexpr int hundred = 100;
using namespace std;
namespace ariel 
{
    class character
    {
        private:
            Point place;
            int life;
            string name;

        public:
            character()=delete;
            character(const character&) = delete;
            character(const character&&) = delete;
            character& operator=(const character&) = delete;
            character& operator=(const character&&) = delete;// move constructor

            

            character(string _name, Point location, int health);
            bool isAlive();
            double distance(character& other_char);
            void hit(int dam);
            virtual string print() = 0;
            string getName() const { return name; }
    };
}
#endif