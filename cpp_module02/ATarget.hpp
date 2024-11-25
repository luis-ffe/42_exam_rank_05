#pragma once
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
    protected:
        std::string _type;

    public:
        ATarget(ATarget &obj);
        ATarget &operator=(ATarget const &obj);
        virtual ~ATarget();
        ATarget(std::string type);
        const std::string &getType() const;
        virtual ATarget *clone() const = 0;
        void getHitBySpell(ASpell const &spell) const;
};