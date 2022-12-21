# include "Warlock.hpp"

Warlock::Warlock() {}
Warlock::Warlock(std::string const &name, std::string const &title){
	this->_name = name;
	this->_title = title;
	std::cout << getName() << ": This looks like another boring day." << std::endl;}
Warlock::~Warlock() {std::cout << getName() << ": My job here is done!" << std::endl;}
std::string	const &Warlock::getName() const {return _name;}
std::string	const &Warlock::getTitle() const {return _title;}
void		Warlock::setTitle(std::string const &title) {
	_title = title;
	}
void		Warlock::introduce() const {std::cout << getName() << ": I am " << getName() << ", " << getTitle() << " !" << std::endl;}
void		Warlock::learnSpell(ASpell *aspell_ptr) {
	if (aspell_ptr) {
		arr.insert(std::pair<std::string, ASpell *>(aspell_ptr->getName(), aspell_ptr->clone()));
	}
}
void		Warlock::forgetSpell(std::string spell_name) {
	std::map<std::string, ASpell *>::iterator it = arr.find(spell_name);
	if (it != arr.end()) {
		delete it->second;
	arr.erase(spell_name);
	}
}
void		Warlock::launchSpell(std::string spell_name, ATarget const &target)
{
	ASpell	*spell = arr[spell_name];
	if (spell) {
		spell->launch(target);
	}
}
