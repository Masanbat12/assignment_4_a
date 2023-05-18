#include "Character.hpp"

namespace ariel{
    class Cowboy:public character{
        private:
            int bullets;
        public:
            Cowboy(std::string name, Point position);
            void shoot(character*);
            bool hasboolets();
            void reload();
            string print() override;
            
    };
}