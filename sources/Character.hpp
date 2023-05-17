#pragma once
#include "Point.hpp"
#include "Character.hpp"
#include "Ninja.hpp"
#include "Cowboy.hpp"
#include <string>

constexpr int hundred = 100;
using namespace std;
namespace ariel 
{
    class Character
    {
        private:
            Point place;
            int life;
            string name;

        public:
            Character()=delete;
            Character(const Character&) = delete;
            Character(const Character&&) = delete;
            Character& operator=(const Character&) = delete;
            Character& operator=(const Character&&) = delete;// move constructor

            

            Character(string _name, Point location, int health);
            bool isAlive();
            double distance(Character& other_char);
            void hit(int dam);
            virtual string print() = 0;
            string getName() const { return name; }
            virtual string print();
    };

}