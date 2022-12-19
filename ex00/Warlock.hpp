#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <string>
# include <iomanip>
# include <iostream>

class Warlock {
	public:
	Warlock(std::string const &name, std::string const &title);
	~Warlock();
	std::string	const &getName() const;
	std::string	const &getTitle() const;
	void		setTitle(std::string const &title);
	void		introduce() const;

	private:
	Warlock();
	Warlock(Warlock const &copy);
	Warlock const& operator=(Warlock const& rhs);
	std::string	_name;
	std::string	_title;
};

#endif
