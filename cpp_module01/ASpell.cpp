#include "ASpell.hpp"

ASpell::ASpell(ASpell &obj) {
    *this = obj;
}
ASpell & ASpell::operator=(ASpell const &obj) {
    _name = obj.getName();
    _effects = obj.getEffects();
    return(*this);
}

ASpell::~ASpell() {
}

ASpell::ASpell(std::string name, std::string effects): _name(name), _effects(effects) {
}

std::string ASpell::getName() const {
    return(_name);
}

std::string ASpell::getEffects() const {
    return (_effects);
}

void ASpell::launch(ATarget const &target) const
{
    target.getHitBySpell(*this);
}