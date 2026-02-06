#include "Goblin.h"
#include "Creature.h"
#include <iostream>
using namespace std;
Goblin::Goblin(){
type=2;
life=30;
damage=15;
defense=10;
alive=true;
}
void Goblin::receive_damage_defense(int damage){
    if(defense-damage<=0){
life=life-damage+defense;
}
if(life<=0){
    alive=false;
}
}
void Goblin::receive_damage(int damage){
    life-=damage;
    if(life<=0){
    alive=false;
}
}
void Goblin::attack(Creature* receiver, int option){
if(option==1){
receiver->receive_damage(damage+add);}
else{
    receiver->receive_damage_defense(damage+add);
}
}
Goblin::~Goblin(){
}