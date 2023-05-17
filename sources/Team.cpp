#include "Team.hpp"
#include <iostream>


namespace ariel
{
    Team::Team(Character *cha): L_team(cha)
        {
            this->add(cha);
        }

        void Team::add(Character *player){}

        void Team::attack(L_team *en){}

         int Team::stillAlive()
        {
           return 0;
        }

        void Team::print(){}
            
}