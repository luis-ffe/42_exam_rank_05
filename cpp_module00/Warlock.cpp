#include "Warlock.hpp"

Warlock::Warlock(){}

Warlock::Warlock(const Warlock &copy){
    *this = copy;
}

Warlock::Warlock(const std::string &name, const std::string &title): _name(name), _title(title){
    std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << _name << ": My job here is done!" << std::endl;
}

const std::string & Warlock::getName() const {
    return (_name);
}

const std::string & Warlock::getTitle() const {
    return(_title);
}

Warlock& Warlock::operator=(const Warlock &assign)
{
    _name = assign.getName(); 
    _title = assign.getTitle();
    return(*this);
}

void Warlock::setTitle(const std::string newtitle) {
    _title = newtitle;
}

void Warlock::introduce() const {
    std::cout << _name << ": I am " << _name << ", " << _title << "!"<< std::endl;

}