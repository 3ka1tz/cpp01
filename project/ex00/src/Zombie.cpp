#include <iostream>

#include "../include/Zombie.hpp"

Zombie::Zombie(const std::string& name) : m_name(name) {
    std::cout << "Wild " << m_name << " appeared!" << std::endl;
}

Zombie::~Zombie() {
    std::cout << "Wild " << m_name << " fainted!" << std::endl;
}

void Zombie::announce() const{
    std::cout << m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
