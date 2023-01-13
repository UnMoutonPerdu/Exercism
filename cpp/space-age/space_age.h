#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

namespace space_age {
    class space_age {
        private:
            long int sec;
            static const double EARTH_SEC = 31557600.0;
            static const double MERCURY = 0.2408467;
            static const double VENUS = 0.61519726;
            static const double MARS = 1.8808158;
            static const double JUPITER = 11.862615;
            static const double SATURN = 29.447498;
            static const double URANUS = 84.016846;
            static const double NEPTUNE = 164.79132;
        
        public:
            space_age(long int seconds);
            long int seconds() const;
            double on_earth() const;
            double on_mercury() const;
            double on_venus() const;
            double on_mars() const;
            double on_jupiter() const;
            double on_saturn() const;
            double on_uranus() const;
            double on_neptune() const;
    };
}  // namespace space_age

#endif // SPACE_AGE_H