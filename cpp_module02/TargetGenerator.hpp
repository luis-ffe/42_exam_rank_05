#pragma once
#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
    private:
        std::map <std::string, ATarget *> _target;
        TargetGenerator(TargetGenerator &copy);
        TargetGenerator &operator=(TargetGenerator const & obj);

    public:
        TargetGenerator();
        ~TargetGenerator();
        void learnTargetType(ATarget *target);
        ATarget * createTarget(std::string const &type);
        void forgetTargetType(std::string const &type);
};
