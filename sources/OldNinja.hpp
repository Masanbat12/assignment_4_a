
#include "Ninja.hpp"
#ifndef OLDNINJA_HPP
#define OLDNINJA_HPP
namespace ariel
{
    class OldNinja : public Ninja
    {
        public:
            OldNinja(string _name, Point location);
            string print();
    };
}
#endif