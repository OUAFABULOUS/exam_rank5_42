#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

#include "ATarget.hpp"

class BrickWall : public ATarget {
    public:
    BrickWall() : ATarget("Inconspicuous Red-brick Wall"){};
    ~BrickWall(){};
    BrickWall *clone() {return (new BrickWall());};
};

#endif