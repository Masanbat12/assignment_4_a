#include "Cowboy.hpp"

namespace ariel{
    
    Cowboy::Cowboy(string name, Point position):Character(name,position,110), bullets(6){}

    void Cowboy::shoot(Character*){};
    bool Cowboy::hasboolets(){return 1;};
    void Cowboy::reload(){};
    string Cowboy::print() 
    {
        return "";
    }
    
    
}