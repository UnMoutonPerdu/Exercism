#include "space_age.h"

namespace space_age {
    space_age::space_age(long int seconds): sec(seconds) {   
    }

    long int space_age::seconds() const {
        return this->sec;
    }

    double space_age::on_earth() const {
        return this->sec/this->EARTH_SEC;
    }

    double space_age::on_jupiter() const {
        return this->on_earth()/this->JUPITER;
    }

    double space_age::on_mars() const {
        return this->on_earth()/this->MARS;
    }

    double space_age::on_mercury() const {
        return this->on_earth()/this->MERCURY;
    }

    double space_age::on_neptune() const {
        return this->on_earth()/this->NEPTUNE;
    }

    double space_age::on_saturn() const {
        return this->on_earth()/this->SATURN;
    }

    double space_age::on_uranus() const {
        return this->on_earth()/this->URANUS;
    }

    double space_age::on_venus() const  {
        return this->on_earth()/this->VENUS;
    }

}  // namespace space_age
