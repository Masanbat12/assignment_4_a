#include "Cowboy.hpp"

namespace ariel{
    
    Cowboy::Cowboy(string name, Point position):character(name,position,110), bullets(6){}

    void Cowboy::shoot(character * enemy){};
    bool Cowboy::hasboolets(){return 1;};
    void Cowboy::reload(){};
    string Cowboy::print() 
    {
        return "";
    }
    
    
}