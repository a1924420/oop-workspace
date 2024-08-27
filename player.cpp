#include <iostream>
#include <string>
#include "player.h"

    void Player::attack (Player* opponent, int damage){
        opponent->takeDamage(damage);
    }

    void Player::takeDamage (int damage){
        health -= damage;
        if (health < 0) health = 0;
        std::cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";
    }

    std::string Player::getName(){
        return name;
    }

    void Player::setName(const std::string& name){
        this->name = name;
    }

    int Player::getHealth(){
        return health;
    }

    void Player::setHealth(int health){
        this->health = health;
    }

    int Player::getDamage(){
        return damage;
    }

    void Player::setDamage(int damage){
        this->damage = damage;
    }
