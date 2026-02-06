#pragma once
#include "Creature.h"
using namespace std;
class Ogre : public Creature{
    public:
    Ogre();
void receive_damage(int damage)override;
void receive_damage_defense(int damage)override;
void attack(Creature* receiver, int option)override;
~Ogre();
};