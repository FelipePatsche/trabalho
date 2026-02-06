#pragma once
class Creature{
protected:
int life, damage, defense, type, add;
bool alive;
public:
bool get_alive(){
return alive;
}
int get_life(){
    return life;
}
int get_type(){
    return type;
}
void change_add(int e){
if(e==1){
add=0;
}
else{
add=5;
}
}
virtual void receive_damage_defense(int damage)=0;
virtual void receive_damage(int damage)=0;
virtual void attack(Creature* receiver,  int option)=0;
virtual ~Creature()=default;
virtual void attack_player(Creature* receiver){
    receiver->receive_damage(damage);
}
};