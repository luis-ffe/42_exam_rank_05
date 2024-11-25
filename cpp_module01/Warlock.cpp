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
    if(newSpell)
    {
        if(_spellBook.find(newSpell->getName()) == _spellBook.end())
        {
            _spellBook[newSpell->getName()] = newSpell->clone();
        }
    }
}

void Warlock::forgetSpell(std::string spellName)
{
    if(_spellBook.find(spellName) != _spellBook.end())
    {
        delete _spellBook[spellName];
        _spellBook.erase(_spellBook.find(spellName));
    }

}

void Warlock::launchSpell(std::string spellName, const ATarget &target)
{
    if(_spellBook.find(spellName) != _spellBook.end())
    {
        _spellBook[spellName]->launch(target);
    }
}