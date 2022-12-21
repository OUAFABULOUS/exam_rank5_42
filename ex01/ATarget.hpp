#ifndef ATarget_HPP
#define ATarget_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget {
	public:
	ATarget() {};
	ATarget(ATarget const &other) {*this = other;};
	ATarget(std::string type) : _type(type) {};
	~ATarget() {};
	std::string	const &getType() const {return(_type);};
	virtual ATarget	*clone() const = 0;
	void	getHitBySpell(ASpell const &hitter) const;
	private:
	std::string	_type;
};


#endif
