#include "Ninja.hpp"

namespace ariel
{
    
    
    Ninja::Ninja(string _name, Point location, int health, int _speed):Character(_name,location,health)
                                                                       ,speed(_speed){};
    void Ninja::slash(Character* enemy){};
    void Ninja::move(Character* enemy){};

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