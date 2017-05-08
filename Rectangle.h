
#ifndef PROJECT10_3_RECTANGLE_H
#define PROJECT10_3_RECTANGLE_H

#include <ostream>
#include "Punct.h"

class Rectangle : public FiguraPlana {
    int x0, y0, x1, y1;
public:
    // constructori
    Rectangle();
    Rectangle(Punct p, int dx, int dy);
    Rectangle(int x0, int y0, int x1, int y1);
    // destructor
    ~Rectangle();

    // setters si getters
    int getX0() const;
    void setX0(int x0);
    int getY0() const;
    void setY0(int y0);
    int getX1() const;
    void setX1(int x1);
    int getY1() const;
    void setY1(int y1);

    // supraincarcare operatori
    Rectangle operator + (Factor const &factor);
    Rectangle operator * (Factor const &factor);
    friend std::ostream &operator<<(std::ostream &os, const Rectangle &rectangle);

    // alte metode
    void translate(Rectangle& figura, Factor const &factor);
    void scale(Rectangle& figura, Factor const &factor);
    void afisareFigura();
    int getArea();
};

#endif //PROJECT10_3_RECTANGLE_H
