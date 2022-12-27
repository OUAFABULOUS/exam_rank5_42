#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <string>
#include "ASpell.hpp"

class ASpell;

class ATarget {
public:
ATarget(){};
ATarget(std::string type) : _type(type){};
ATarget(ATarget const &other) {*this = other;};
ATarget &operator=(ATarget const &other) {
_type = other.getType();
return (*this);
};
virtual ~ATarget(){};
std::string const &getType() const {return(_type);};
virtual ATarget  *clone()=0;
void    getHitBySpell(ASpell const &spell) const;

private:
std::string _type;


};

#endif