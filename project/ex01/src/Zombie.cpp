#include <iostream>

#include "../include/Zombie.hpp"

Zombie::Zombie() {
    std::cout << "Wild ? appeared!" << std::endl;
}

Zombie::~Zombie() {
    std::cout << "Wild " << m_name << " fainted!" << std::endl;
}

void Zombie::setName(const std::string& name) {
    m_name = name;
}

void Zombie::announce() const {
    std::cout << m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
