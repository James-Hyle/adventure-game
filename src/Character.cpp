#include <iostream>
#include "Character.h"

Character::Character() {
    name = "Test Character",
        health = 20,
        attack = 10,
        defense = 15,
        cons = 3;
}

Character::Character(std::string name, int health, int attack, int defense, int cons) {
    this->name = name;
    this->health = health;
    this->attack = attack;
    this->defense = defense;
    this->cons = cons;
}

std::string Character::getName() { return name; }
void Character::setName(std::string name) { name = name; }

int Character::getHealth() { return health; }
void Character::setHealth(int health) { health = health; }

int Character::getAttack() { return attack; }
void Character::setAttack(int attack) { attack = attack; }

int Character::getDefense() { return defense; }
void Character::setDefense(int defense) { defense = defense; }

int Character::getCons() { return cons; }
void Character::setCons(int cons) { cons = cons; }

void Character::displayCharacterDetails() {
    std::cout << "Name: " << name << "\n";
    std::cout << "Health: " << health << "\n";
    std::cout << "Attack: " << attack << "\n";
    std::cout << "Defense: " << defense << "\n";
    std::cout << "Constitution: " << cons << std::endl;
}
