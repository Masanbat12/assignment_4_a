#include "Ninja.hpp"
#ifndef YOUNGNINJA_HPP
#define YOUNGNINJA_HPP
namespace ariel
{
    class YoungNinja : public Ninja
    {
        public:
            YoungNinja(string _name, Point location);
            string print();
    };
}
#endif