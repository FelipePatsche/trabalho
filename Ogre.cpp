#include "Ogre.h"
#include "Creature.h"
#include <iostream>
using namespace std;
Ogre::Ogre(){
type=3;
life=50;
damage=30;
defense=2;
alive=true;
}
void Ogre::receive_damage_defense(int damage){
    if(defense-damage<=0){
life=life-damage+defense;
}
if(life<=0){
    alive=false;
}
}
void Ogre::receive_damage(int damage){
    life-=damage;
    if(life<=0){
    alive=false;
}
}
void Ogre::attack(Creature* receiver, int option){
if(option==1){
receiver->receive_damage(damage+add);}
else{
    receiver->receive_damage_defense(damage+add);
}
}
Ogre::~Ogre(){
}