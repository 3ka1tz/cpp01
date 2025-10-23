#include "../include/Zombie.hpp"

int main() {
    Zombie* zombie = newZombie("ZombieA");
    zombie->announce();
    delete zombie;

    randomChump("ZombieB");

    return 0;
}
