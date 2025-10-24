#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl {
public:
    void complain(const std::string& level) const;

private:
    int getLevel(const std::string& level) const;

    void debug() const;
    void info() const;
    void warning() const;
    void error() const;

    typedef void (Harl::*MemberFuncPtr)() const;
};

#endif
