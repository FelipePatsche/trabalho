#pragma once
#include "Creature.h"
using namespace std;
class Goblin : public Creature{
    public:
    Goblin();
void receive_damage(int damage)override;
void receive_damage_defense(int damage)override;
void attack(Creature* receiver, int option)override;
~Goblin();
};