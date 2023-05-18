#include "L_team.hpp"
#include <vector>

namespace ariel{
    class Team:public virtual L_team{
        private:
            vector<Cowboy*> cowboys;
            vector<Ninja*> ninjas;
        public:
            Team(character*);
            void attack(L_team* other) override;
            void print() override;
            void add(character* character) override;
            int stillAlive() override;
            
    };
}








