#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
public:
    Zombie(const std::string& name);
    ~Zombie();

    void announce() const;

private:
    std::string m_name;
};

Zombie* newZombie(const std::string& name);
void randomChump(const std::string& name);

#endif
