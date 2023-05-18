#pragma once
#include "Cowboy.hpp"
#include "Ninja.hpp"
#include "YoungNinja.hpp"
#include "TrainedNinja.hpp"
#include "OldNinja.hpp"
#include "Character.hpp"


namespace ariel{
    //Leader of the team
    class L_team{
        private:
            character* leader_t;
        protected:
            character* getTeamLeader() const {
                return leader_t;
            }
        public:
            L_team(character* chara):leader_t(chara){};
            virtual void attack(L_team* other)= 0;
            virtual void print()= 0;
            virtual void add(character*) = 0;
            virtual int stillAlive() = 0;
            virtual ~L_team() = default;
            L_team(const L_team&) = default;
            L_team& operator=(const L_team&) = default;
            L_team(L_team&&) = default;
            L_team& operator=(L_team&&) = default;
    };
}
