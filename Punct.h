

#ifndef PROJECT10_3_POINT_H
#define PROJECT10_3_POINT_H

#include <ostream>
#include "FiguraPlana.h"

class Punct : public FiguraPlana {
    int x0, y0;
    Coordonata coordonata;
public:

    // constructori
    Punct();
    explicit Punct(Coordonata coordonata0);
    Punct(int x0, int y0);
    // destructor
    ~Punct();

    // setters si getters
    int getX0() const;
    void setX0(int x0);
    int getY0() const;
    void setY0(int y0);
    const Coordonata &getCoordonata() const;
    void setCoordonata(const Coordonata &coordonata);

    // supraincarcare operatori
    Punct operator + (Factor const &factor);
    Punct operator * (Factor const &factor);
    friend std::ostream &operator<<(std::ostream &os, const Punct &punct);

    // alte metode
    void translate(Punct& figura, Factor const &factor);
    void scale(Punct& figura, Factor const &factor);
    void afisareFigura();

};

#endif //PROJECT10_3_POINT_H
