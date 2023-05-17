#include "L_team.hpp"


#include <vector>

namespace ariel{
    class Team:public virtual L_team{
        private:
            vector<Cowboy*> cowboys;
            vector<Ninja*> ninjas;
        public:
            Team(Character*);
            void attack(L_team* other) override;
            void print() override;
            void add(Character* character) override;
            int stillAlive() override;
            
    };
}








