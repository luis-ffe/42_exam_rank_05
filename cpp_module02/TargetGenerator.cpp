#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(TargetGenerator &copy)
{
    *this = copy;
}
TargetGenerator &TargetGenerator::operator=(TargetGenerator const & obj)
{
    _target = obj._target;
    return (*this);
}

TargetGenerator::TargetGenerator()
{

}

TargetGenerator::~TargetGenerator()
{

}
void TargetGenerator::learnTargetType(ATarget *target)
{
    if(target)
    {
        _target[target->getType()] = target;
    }
}

ATarget * TargetGenerator::createTarget(std::string const &type)
{
    ATarget *tmp = NULL;
    if(_target.find(type) != _target.end())
    {
        tmp = _target[type];
    }
    return tmp;
}

void TargetGenerator::forgetTargetType(std::string const &type)
{
    if(_target.find(type) != _target.end())
    {
        delete _target[type];
        _target.erase(_target.find(type));
    }
}