#include<bits/stdc++.h>
using namespace std;
class gun{
    public:
    int ammo;
    int damage;
};
class player{
    private:
    class Helmet{
        int hp;
        int level;
        public:
        void setHp(int hp){
            this->hp = hp;
        }
        void setLevel(int level){
            this->level = level;
        }
        int getHp(){
            return hp;
        }
        int getLevel(){
            return level;
        }
    };
    int health;
    int score;
    gun Gun;
    Helmet  helmet;
    public:
    void setHealth(int health){
        this->health = health;
    }
    void setScore(int score){
        this->score = score;
    }
    int getScore(){
        return score;
    }
    int  getHealth(){
        return health;
    }
    void setGun(gun Gun){
        this->Gun = Gun;
    }
    gun getGun(){
        return Gun;
    }
    void setHelmet(int level){
        Helmet *helmet = new Helmet;
        helmet->setLevel(level);
        int health= 0 ;
        if(level == 1) health = 10;
        if(level == 2) health = 20;
        helmet->setHp(health);
        this->helmet = *helmet;
    }
};
int main() {
   player *amit = new player;
    gun aKM;
    aKM.ammo = 100;
    aKM.damage = 10;
   amit->setHealth(100);
   amit->setScore(10);
   amit->setGun(aKM);
   amit->setHelmet(2);
   cout<<amit->getHealth()<<endl;
   cout<<amit->getScore()<<endl;


}