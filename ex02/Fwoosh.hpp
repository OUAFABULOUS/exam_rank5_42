#ifndef FWOOSH_HPP
# define FWOOSH_HPP

#include "ASpell.hpp"

class Fwoosh : public ASpell {
    public:
    Fwoosh() : ASpell("Fwoosh", "fwooshed"){};
    ~Fwoosh(){};
    Fwoosh *clone() {return (new Fwoosh());};
};

#endif