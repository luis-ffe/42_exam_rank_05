#include "Warlock.hpp"

Warlock::Warlock(){
}

Warlock::Warlock(const Warlock &obj) {
    *this = obj;
}

Warlock & Warlock::operator=(const Warlock &obj) {
    _name = obj.getName();
    _title = obj.getTitle();
    return(*this);
}

Warlock::~Warlock(){
    std::cout << _name << ": My job here is done!" << std::endl;

}

Warlock::Warlock(const std::string &name, const std::string &title): _name(name), _title(title)
{
    std::cout << _name << ": This looks like another boring day." << std::endl;
}

void Warlock::setTitle(const std::string &title) {
    _title = title;
}

const std::string & Warlock::getTitle() const {
    return(_title);
}

const std::string & Warlock::getName() const {
    return(_name);
}

void Warlock::introduce() const
{
    std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell * newSpell)
{
    _spellBook.learnSpell(newSpell);
}

void Warlock::forgetSpell(std::string spellName)
{
    _spellBook.forgetSpell(spellName);
}

void Warlock::launchSpell(std::string spellName, const ATarget &target)
{
    _spellBook.createSpell(spellName)->launch(target);
}