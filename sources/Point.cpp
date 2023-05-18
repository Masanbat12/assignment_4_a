#include "Point.hpp"
namespace ariel{
    
    Point::Point(double _x_pos, double _y_pos):x_pos(_x_pos), y_pos(_y_pos){};
    double Point::distance(Point another){return 0;};
    void Point::moveTowards(Point another){};
    double Point::get_X () const {return this->x_pos;};
    double Point::get_y () const {return this->y_pos;};
}