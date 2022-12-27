#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

#include "ASpell.hpp"
#include <map>

class ASpell;

class SpellBook {
    private:
    SpellBook(SpellBook const &other);
    SpellBook & operator=(SpellBook const &other);
    std::map<std::string, ASpell *> spell_arr;

    public:
    SpellBook(){};
    ~SpellBook();
    void    learnSpell(ASpell *);
    void    forgetSpell(std::string const &name_spell);
    ASpell  *createSpell(std::string const &name_spell);
};

#endif
