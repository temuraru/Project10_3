
#include <ostream>

/**
 * Perechi de coordonate pentru puncte
 * - exprimate in pixeli, deci sunt de tip int
 */
class Coordonata {
    int x = 0, y = 0;
public:
    Coordonata() = default;
    Coordonata(int fx, int fy) : x(fx), y(fy) {};
    int getX() const {
        return x;
    }
    int getY() const {
        return y;
    }
    void setX(int x) {
        Coordonata::x = x;
    }
    void setY(int y) {
        Coordonata::y = y;
    }

    friend std::ostream &operator<<(std::ostream &os, const Coordonata &coordonata) {
        os << "Coordonata x: " << coordonata.x << ", y: " << coordonata.y;
        return os;
    }
};
/**
 * O pereche de numere reprezentand vectorul de translatie, respectiv perechea de factori de scalare
 * - lucreaza cu pixeli, deci sunt de tip int
 */
class Factor {
    int x = 0, y = 0;
public:
    Factor() = default;
    Factor(int x, int y) : x(x), y(y) {}
    int getX() const {
        return x;
    }
    void setX(int x) {
        Factor::x = x;
    }
    int getY() const {
        return y;
    }
    void setY(int y) {
        Factor::y = y;
    }

    friend std::ostream &operator<<(std::ostream &os, const Factor &factor) {
        os << "Factor x: " << factor.x << ", y: " << factor.y;
        return os;
    }
};
