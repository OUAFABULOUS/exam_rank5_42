#include "ATarget.hpp"

void	ATarget::getHitBySpell(ASpell const &hitter) const {
	std::cout << getType() << " has been " << hitter.getEffects() << std::endl;
}
