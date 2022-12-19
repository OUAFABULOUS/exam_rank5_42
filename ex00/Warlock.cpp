# include "Warlock.hpp"

Warlock::Warlock() {}
Warlock::Warlock(std::string name, std::string title): _name(name), _title(title) {std::cout << getName() << ": This looks like another boring day." << std::endl;}
Warlock::~Warlock() {std::cout << getName() << ": My job here is done!" << std::endl;}
std::string	const &Warlock::getName() const {return _name;}
std::string	const &Warlock::getTitle() const {return _title;}
void		Warlock::setTitle(std::string const &title) {
	_title = title;
	}
void		Warlock::introduce() const {std::cout << getName() << ": I am " << getName() << ", " << getTitle() << " !" << std::endl;}
