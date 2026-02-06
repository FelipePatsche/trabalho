#pragma once
#include "Creature.h"
using namespace std;
class Hero : public Creature{
    public:
    Hero();
void receive_damage(int damage)override;
void receive_damage_defense(int damage)override;
void attack(Creature* receiver, int option)override;
~Hero();
};