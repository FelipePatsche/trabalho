#include "Hero.h"
#include "Creature.h"
#include <iostream>
using namespace std;
Hero::Hero(){
type=1;
life=200;
damage=25;
defense=25;
alive=true;
}
void Hero::receive_damage_defense(int damage){
    if(defense-damage<=0){
life=life-damage+defense;
}
if(life<=0){
    alive=false;
}
}
void Hero::receive_damage(int damage){
    life-=damage;
    if(life<=0){
    alive=false;
}
}
void Hero::attack(Creature* receiver, int option){
receiver->receive_damage(damage);
}
Hero::~Hero(){
}