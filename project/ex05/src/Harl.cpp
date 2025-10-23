#include <iostream>

#include "../include/Harl.hpp"

int Harl::getLevel(std::string level) const {
    const std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int levelIndex = 4;

}

void Harl::complain(std::string level) const {
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    void (Harl::*functions[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int i = 0; i < 4; ++i) {
        if (levels[i] == level) {
            (this->*functions[i])();
            return;
        }
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
