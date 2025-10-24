#include <iostream>

#include "../include/Harl.hpp"

int Harl::getLevel(const std::string& level) const {
    const std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; ++i) {
        if (level == levels[i])
            return i;
    }

    return -1;
}

void Harl::complain(const std::string& level) const {
    const MemberFuncPtr complains[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    const int levelIndex = getLevel(level);

    if (levelIndex == -1) {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    } else {
        (this->*(complains[levelIndex]))();
    }
}

void Harl::debug() const {
    std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info() const {
    std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning() const {
    std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error() const {
    std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}
