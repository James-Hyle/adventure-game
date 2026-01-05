#ifndef CHARACTER_H
#define CHARACTER_H

// Class for characters in adventure game
class Character {

private:
    // Instance Variables
    std::string name{};
    int health{}, attack{}, defense{}, cons{};

public:
    // Constructor 
    Character(std::string name, int health, int attack, int defense, int cons);
    // Test Constructor
    Character();

    // Setters and Getters
    std::string getName();
    void setName(std::string name);

    int getHealth();
    void setHealth(int health);

    int getAttack();
    void setAttack(int attack);

    int getDefense();
    void setDefense(int defense);

    int getCons();
    void setCons(int cons);

    // Methods
    void displayCharacterDetails();

};

#endif
