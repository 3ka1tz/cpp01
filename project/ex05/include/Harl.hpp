#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl {
public:
    int getLevel(std::string level) const;
    void complain(std::string level) const;

private:
    void debug() const;
    void info() const;
    void warning() const;
    void error() const;
};

#endif
