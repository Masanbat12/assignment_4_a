#include <iostream>
#pragma once

namespace ariel{
    class Point 
    {
    private:
        double x_pos;
        double y_pos;
    public:
        Point(double _x_pos, double _y_pos);
        double distance(Point another);
        void moveTowards(Point another);
        double get_X () const;
        double get_y () const;
    };
    
}