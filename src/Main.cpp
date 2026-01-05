#include <iostream>
#include "Character.h"

bool runGame() {
    std::cout << "Welcome to the Adventure... " << "\n";
    Character test;
    test.displayCharacterDetails();
    return true;
}

int main() {
    runGame();
    return 0;
}
