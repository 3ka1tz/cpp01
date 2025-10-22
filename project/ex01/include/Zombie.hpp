#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
public:
    Zombie();
    ~Zombie();

    void setName(std::string name);
    void announce();

private:
    std::string m_name;
};

Zombie* zombieHorde(int n, std::string name);

#endif
