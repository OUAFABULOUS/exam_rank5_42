#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <string>
# include <iomanip>
# include <iostream>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"
# include "SpellBook.hpp"

class ASpell;
class ATarget;
class SpellBook;

class Warlock {
	public:
	Warlock(std::string const &name, std::string const &title);
	~Warlock();
	std::string	const &getName() const;
	std::string	const &getTitle() const;
	void		setTitle(std::string const &title);
	void		introduce() const;

	void		learnSpell(ASpell *spell);
	void		forgetSpell(std::string spell_name);
	void		launchSpell(std::string spell_name, ATarget const &target);

	private:
	Warlock();
	Warlock(Warlock const &copy);
	Warlock const& operator=(Warlock const& rhs);
	std::string	_name;
	std::string	_title;
	std::map<std::string, ASpell *> spell_arr;
	SpellBook	spells;
};

#endif
