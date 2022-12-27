#include "ATarget.hpp"
void    ATarget::getHitBySpell(ASpell const &spell) const {
    std::cout << getType() <<  "has been " << spell.getEffects() << "!" << std::endl;
}

