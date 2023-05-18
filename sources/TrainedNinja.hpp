#include "Ninja.hpp"
#ifndef TRAINEDNINJA_HPP
#define TRAINEDNINJA_HPP

namespace ariel
{
    class TrainedNinja : public Ninja
    {
        public:
            TrainedNinja(string _name, Point location);
            string print();
    };
}
#endif