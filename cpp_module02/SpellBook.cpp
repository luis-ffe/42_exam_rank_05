#include "SpellBook.hpp"

SpellBook::SpellBook(SpellBook &copy)
{
    *this = copy;
}

SpellBook & SpellBook::operator=(SpellBook const & obj)
{
    _spellBook = obj._spellBook;
    return(*this);
}

SpellBook::SpellBook()
{

}

SpellBook::~SpellBook()
{
    
}

void SpellBook::learnSpell(ASpell *newSpell)
{
    if(newSpell)
    {
        if(_spellBook.find(newSpell->getName()) == _spellBook.end())
        {
            _spellBook[newSpell->getName()] = newSpell->clone();
        }
    }
}

void SpellBook::forgetSpell(std::string const &spellName)
{
    if(_spellBook.find(spellName) == _spellBook.end())
    {
        delete _spellBook[spellName];
        _spellBook.erase(_spellBook.find(spellName));
    }
}

ASpell * SpellBook::createSpell(std::string const &spellName)
{
    ASpell *tmp = NULL;
    if(_spellBook.find(spellName) != _spellBook.end())
    {
        tmp = _spellBook[spellName];
    }
    return (tmp);
}