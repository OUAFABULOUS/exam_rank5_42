#ifndef ASpell_HPP
#define ASpell_HPP

#include <string>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
public:
	ASpell(){};
	ASpell(ASpell const &other){ *this = other;};
	ASpell(std::string name, std::string effects) : _name(name), _effects(effects){};
	virtual ~ASpell(){};
	std::string const getName() const
	{
		return (_name);
	};
	std::string const getEffects() const
	{
		return (_effects);
	};
	virtual ASpell *clone() const = 0;
	ASpell &operator=(ASpell const &other)
	{
		this->_name = other._name;
		this->_effects = other._effects;
		return (*this);
	};
	void	launch(ATarget const &target);

private:
	std::string _name;
	std::string _effects;
};

#endif
