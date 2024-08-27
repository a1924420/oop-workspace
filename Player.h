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

    void attack (Player* opponent, int damage);

    void takeDamage (int damage);

    std::string getName();

    void setName(const std::string& name);

    int getHealth();

    void setHealth(int health);

    int getDamage();

    void setDamage(int damage);

};

#endif