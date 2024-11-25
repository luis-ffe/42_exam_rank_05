#include "ATarget.hpp"

ATarget::ATarget(ATarget &obj)
{
    *this = obj;
}

ATarget & ATarget::operator=(ATarget const &obj)
{

    _type = obj.getType();
    return (*this);
}

ATarget::~ATarget()
{}

ATarget::ATarget(std::string type):  _type(type)
{

}

const std::string & ATarget::getType() const
{
    return(_type);
}

void ATarget::getHitBySpell(const ASpell &spell) const
{
    std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
}
