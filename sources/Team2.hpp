#include "L_team.hpp"

#include <vector>

namespace ariel{
    class Team2:public virtual L_team{
        private:
            vector<Character*> teamates;
        public:
            Team2(Character*);
            void attack(L_team* another) override;
            void print() override;
            void add(Character* character) override;
            int stillAlive() override;
            ~Team2() override= default;
            Team2(const Team2&) = delete;
            Team2& operator=(const Team2&) = delete;
            Team2(Team2&&) = delete;
            Team2& operator=(Team2&&) = delete;

    };
}







