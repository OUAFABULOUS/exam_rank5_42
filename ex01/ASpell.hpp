#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell {
public:
ASpell(){};
ASpell(std::string name, std::string effects) : _name(name), _effects(effects) {};
ASpell(ASpell const &other) {*this = other;};
ASpell &operator=(ASpell const &other) {
_name = other.getName();
_effects = other.getEffects();
return (*this);
};
virtual ~ASpell(){};
std::string const &getName() const {return(_name);};
std::string const &getEffects() const {return(_effects);};
virtual ASpell  *clone()=0;
void    launch(ATarget const &target) const ;

private:
std::string _name;
std::string _effects;

};

#endif