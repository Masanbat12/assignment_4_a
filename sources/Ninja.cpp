#include "Ninja.hpp"
#include "YoungNinja.hpp"
#include "TrainedNinja.hpp"
#include "OldNinja.hpp"


namespace ariel
{
    
    
    Ninja::Ninja(string _name, Point location, int health, int _speed):character(_name,location,health)
                                                                       ,speed(_speed){};
    void Ninja::slash(character* enemy){};
    void Ninja::move(character* enemy){};

    YoungNinja::YoungNinja(string _name, Point locat):Ninja(_name,locat,100,14){};
    TrainedNinja::TrainedNinja(string _name, Point locat):Ninja(_name,locat,120,12){};
    OldNinja::OldNinja(string _name, Point locat):Ninja(_name,locat,150,8){};

    // printing
    int Ninja::g_Speed()
    {
        return this->speed;
    }
    string YoungNinja::print(){return "";};
    string TrainedNinja::print(){return "";};
    string OldNinja::print(){return "";};
}