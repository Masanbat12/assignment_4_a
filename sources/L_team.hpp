#pragma once
#include "Cowboy.hpp"
#include "Ninja.hpp"
#include "Character.hpp"


namespace ariel{
    //Leader of the team
    class L_team{
        private:
            Character* leader_t;
        protected:
            Character* getTeamLeader() const {
                return leader_t;
            }
        public:
            L_team(Character* character):leader_t(character){};
            virtual void attack(L_team* other)= 0;
            virtual void print()= 0;
            virtual void add(Character*) = 0;
            virtual int stillAlive() = 0;
            virtual ~L_team() = default;
            L_team(const L_team&) = default;
            L_team& operator=(const L_team&) = default;
            L_team(L_team&&) = default;
            L_team& operator=(L_team&&) = default;
    };
}
