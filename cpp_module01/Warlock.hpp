#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"

class Warlock
{
    private:
        std::string _name;
        std::string _title;
        std::map <std::string, ASpell *> _spellBook;
        Warlock();
        Warlock(const Warlock &obj);
        Warlock &operator=(const Warlock &obj);

    public:
        ~Warlock();
        Warlock(const std::string &name, const std::string &title);
        void setTitle(const std::string &title);
        const std::string &getTitle() const;
        const std::string &getName() const;
        void introduce() const;

        void learnSpell(ASpell * newSpell);
        void forgetSpell(std::string spellName);
        void launchSpell(std::string spellName, const ATarget &target);

};