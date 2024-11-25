#pragma once
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
    protected:
        std::string _name;
        std::string _effects;

    public:
        ASpell(ASpell &obj);
        ASpell &operator=(ASpell const &obj);
        virtual ~ASpell();
        ASpell(std::string name, std::string effects);
        std::string getName() const;
        std::string getEffects() const;
        virtual ASpell *clone() const = 0;
        void launch(ATarget const &target) const;
};