# include "Warlock.hpp"

Warlock::Warlock() {}
Warlock::Warlock(std::string const &name, std::string const &title): _name(name), _title(title) {std::cout << getName() << ": This looks like another boring day." << std::endl;}
Warlock::~Warlock() {
	std::cout << getName() << ": My job here is done!" << std::endl;
	std::map<std::string, ASpell *>::iterator it_end = spell_arr.end();
	for(std::map<std::string, ASpell *>::iterator it_begin = spell_arr.begin(); it_begin != it_end; ++it_begin) {
		delete(it_begin->second);
	}
	spell_arr.clear();

	}
std::string	const &Warlock::getName() const {return _name;}
std::string	const &Warlock::getTitle() const {return _title;}
void		Warlock::setTitle(std::string const &title) {
	_title = title;
	}
void		Warlock::introduce() const {std::cout << getName() << ": I am " << getName() << ", " << getTitle() << " !" << std::endl;}
void		Warlock::learnSpell(ASpell *spell){
	if (spell) {
		spell_arr.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
	}
}
void		Warlock::forgetSpell(std::string spell_name)
{
		std::map<std::string, ASpell *>::iterator it = spell_arr.find(spell_name);
		if (it != spell_arr.end()){
			delete (it->second);
			spell_arr.erase(spell_name);
		}
}

void		Warlock::launchSpell(std::string spell_name, ATarget const &target) {
	ASpell	*spell = spell_arr[spell_name];
	if (spell) {
		spell->launch(target);
	}

}