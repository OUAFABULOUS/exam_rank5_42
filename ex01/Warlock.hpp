#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <string>
# include <iomanip>
# include <iostream>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"

class Warlock {
	public:
	Warlock(std::string const &name, std::string const &title);
	~Warlock();
	std::string	const &getName() const;
	std::string	const &getTitle() const;
	void		setTitle(std::string const &title);
	void		introduce() const;
	void		learnSpell(ASpell *aspell_ptr);
	void		forgetSpell(std::string spell_name);
	void		launchSpell(std::string, ATarget const &target);

	private:
	Warlock();
	Warlock(Warlock const &copy);
	Warlock const& operator=(Warlock const& rhs);
	std::string	_name;
	std::string	_title;
	std::map<std::string, ASpell *> arr;
};

#endif
