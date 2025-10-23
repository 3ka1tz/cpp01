#include <sstream>

#include "../include/Zombie.hpp"

Zombie* zombieHorde(int n, const std::string& name) {
    Zombie* zombieArray = new Zombie[n];
    
    for (int i = 0; i < n; ++i) {
        std::ostringstream indexedName;
        indexedName << name << (i + 1);
        zombieArray[i].setName(indexedName.str());
    }

    return zombieArray;
}
