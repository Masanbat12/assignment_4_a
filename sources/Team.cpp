#include "Team.hpp"
#include <iostream>


namespace ariel
{
    Team::Team(character *cha): L_team(cha)
        {
            this->add(cha);
        }

        void Team::add(character *player){}

        void Team::attack(L_team *en){}

         int Team::stillAlive()
        {
           return 0;
        }

        void Team::print(){}
            
}