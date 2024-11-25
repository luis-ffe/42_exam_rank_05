#pragma once
#include <map>
#include "ASpell.hpp"

class SpellBook
{
    private:
        std::map <std::string, ASpell *> _spellBook;
        SpellBook(SpellBook &copy);
        SpellBook &operator=(SpellBook const & obj);

    public:
        SpellBook();
        ~SpellBook();
        void learnSpell(ASpell *spell);
        void forgetSpell(std::string const &spellName);
        ASpell *createSpell(std::string const &spellName);
};