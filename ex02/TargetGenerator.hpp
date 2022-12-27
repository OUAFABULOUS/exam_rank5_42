#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

#include "ATarget.hpp"
#include <map>

class ATarget;

class TargetGenerator {
private:
TargetGenerator(TargetGenerator const &other);
TargetGenerator &operator=(TargetGenerator const &other);

public:
TargetGenerator(){};
~TargetGenerator();
void    learnTargetType(ATarget *target);
void    forgetTargetType(std::string const &target_name);
ATarget *createTarget(std::string const &target_name);
std::map<std::string, ATarget *> targets_arr;
};

#endif