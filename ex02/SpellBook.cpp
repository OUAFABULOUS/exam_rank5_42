#include "SpellBook.hpp"

SpellBook::~SpellBook()
{
    std::map<std::string, ASpell *>::iterator it_end = spell_arr.end();
    for (std::map<std::string, ASpell *>::iterator it_begin = spell_arr.begin(); it_begin != it_end; ++it_begin)
    {
        delete (it_begin->second);
    }
    spell_arr.clear();
}

    void    SpellBook::learnSpell(ASpell *spell){
        	if (spell) {
		spell_arr.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
	}
    }
    void    SpellBook::forgetSpell(std::string const &name_spell) {
		std::map<std::string, ASpell *>::iterator it = spell_arr.find(name_spell);
		if (it != spell_arr.end()){
			delete (it->second);
			spell_arr.erase(name_spell);
		}
    }
    ASpell  *SpellBook::createSpell(std::string const &name_spell) {
        std::map<std::string, ASpell *>::iterator it = spell_arr.find(name_spell);
        if (it != spell_arr.end()) {
            return(spell_arr[name_spell]);
        }
        return (NULL);
    }