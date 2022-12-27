#ifndef FIREBALL_HPP
# define FIREBALL_HPP

#include "ASpell.hpp"

class Fireball : public ASpell {
    public:
    Fireball() : ASpell("Fireball", "burnt to crisp"){};
    ~Fireball(){};
    Fireball *clone() {return (new Fireball());};
};

#endif