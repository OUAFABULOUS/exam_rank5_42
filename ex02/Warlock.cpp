#include "Warlock.hpp"

Warlock::Warlock() {}
Warlock::Warlock(std::string const &name, std::string const &title) : _name(name), _title(title) { std::cout << getName() << ": This looks like another boring day." << std::endl; }
Warlock::~Warlock() {
	std::cout << "My job here is done!" << std::endl;
}
std::string const &Warlock::getName() const { return _name; }
std::string const &Warlock::getTitle() const { return _title; }
void Warlock::setTitle(std::string const &title)
{
	_title = title;
}
void Warlock::introduce() const { std::cout << getName() << ": I am " << getName() << ", " << getTitle() << " !" << std::endl; }
void Warlock::learnSpell(ASpell *spell)
{
	spells.learnSpell(spell);
}
void Warlock::forgetSpell(std::string spell_name)
{
	spells.forgetSpell(spell_name);
}

void Warlock::launchSpell(std::string spell_name, ATarget const &target) {
	ASpell *spell = NULL;
	ATarget *test = 0;
	if (test != &target)
	{
		spell = spells.createSpell(spell_name);
	}
	if (spell)
	{
		spell->launch(target);
	}
}