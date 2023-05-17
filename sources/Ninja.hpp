#pragma once
#include "Character.hpp"

namespace ariel{
    class Ninja:public Character{
        private:
            int speed;
        public:
            Ninja(string _name, Point location, int health, int _speed);
            void slash(Character* enemy);
            void move(Character* enemy);
            int g_Speed();
    };

    class YoungNinja:public Ninja{
        public:
            YoungNinja(string _name, Point location);
            string print() override;
    };

    class TrainedNinja:public Ninja{
        public:
            TrainedNinja(string _name, Point location);
            string print() override;
    };

    class OldNinja:public Ninja{
        public:
            OldNinja(string _name, Point location);
            string print() override;
    };
}