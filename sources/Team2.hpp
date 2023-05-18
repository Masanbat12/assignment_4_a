#include "L_team.hpp"
#include <vector>

namespace ariel{
    class Team2:public virtual L_team{
        private:
            vector<character*> teamates;
        public:
            Team2(character*);
            void attack(L_team* another) override;
            void print() override;
            void add(character* chara) override;
            int stillAlive() override;
            ~Team2() override= default;
            Team2(const Team2&) = delete;
            Team2& operator=(const Team2&) = delete;
            Team2(Team2&&) = delete;
            Team2& operator=(Team2&&) = delete;

    };
}







