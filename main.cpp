#include "Goblin.h"
#include "Hero.h"
#include "Creature.h"
#include "Ogre.h"
#include <vector>
#include <iostream>
#include <random>
#include <cstdlib>
#include <string>
using namespace std;
int main(){
    Hero hero;
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(0,1), distr(0,30);
vector<Creature*> creatures;
int units = distr(mt);
int unit;
int option;
int creature_option;
int life;
string type;
creatures.push_back(new Goblin());
creatures.push_back(new Ogre());
for(int i=2; i<units; i++){
    unit = dist(mt);
if(unit==0){
    creatures.push_back(new Goblin());
}
else if (unit==1){
    creatures.push_back(new Ogre());
}
}
while(creatures.size()){
    if(creatures[0]->get_type()==2){
            cout<<"Um Goblin selvagem aparece!\n\n";
            type="Goblin";
    }
    else{
            cout<<"Um Ogro selvagem aparece!\n\n";
            type="Ogro";
    }


    while(creatures[0]->get_alive()){
            cout<<"Sua Vida:"<<hero.get_life()<<"| Vida do "<<type<<": "<<creatures[0]->get_life()<<endl;
        
    cout<<"Escolha sua ação:\n1. Atacar\n2. Defender\n>";
    cin>>option;
    creature_option=dist(mt);
    if(option==1){
        life=creatures[0]->get_life();
        hero.attack_player(creatures[0]);
        life=life-creatures[0]->get_life();
        cout<<"Você ataca o "<<type<<" causando "<<life<<" de dano!\n\n";
    }
    else{
        cout<<"Você defende\n\n";
    }
    if(creatures[0]->get_alive()){
    
        life=hero.get_life();
        creatures[0]->change_add(option);
        creatures[0]->attack(&hero , option);
        life=life-hero.get_life();
        cout<<"O "<<type<<" ataca você causando "<<life<<" de dano!\n\n";
        if(hero.get_alive()==false){
            cout<<"voce morreu :(";
            while(!creatures.empty()){
                delete creatures[0];
                creatures.erase(creatures.begin());
            }
            return 0;
        }
    
}

}
if(creatures[0]->get_alive()==false){
delete creatures[0];
 cout<<"O "<<type<<" morreu"<<"\n\n";
     creatures.erase(creatures.begin());}

    }
    cout<<"voce ganhou";
}
    