#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

class Player{

    private:

    std::string name;

    int health;

    protected:

    int damage;

    public:

    Player (std::string name, int health, int damage): name(name), health(health), damage(damage){}   

    void attack (Player* opponent, int damage){
        opponent->takeDamage(damage);
    }

    void takeDamage (int damage){
        health -= damage;
        if (health < 0) health = 0;
        std::cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";
    }

    std::string getName() const {
        return name;
    }

    void setName(const std::string& name){
        this->name = name;
    }

    int getHealth() const {
        return health;
    }

    void setHealth(int health){
        this->health = health;
    }

    int getDamage() const {
        return damage;
    }

    void setDamage(int damage){
        this->damage = damage;
    }

};

#endif