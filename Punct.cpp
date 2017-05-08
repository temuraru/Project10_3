#include <iostream>

#include "Punct.h"

Punct::Punct() {
    setTip(0);
}
// constructor dat prin perechi de coordonata exprimate in pixeli, perechile fiind date cu ajutorul unei structuri definite separat
Punct::Punct(Coordonata coordonata0) {
    x0 = coordonata0.getX();
    y0 = coordonata0.getY();
    coordonata = coordonata0;
    setTip(0);
}

Punct::Punct(int X0, int Y0) {
    x0 = X0;
    y0 = Y0;
    coordonata = Coordonata(X0, Y0);
    setTip(0);
}

Punct::~Punct() { }

int Punct::getX0() const {
    return x0;
}
void Punct::setX0(int x0) {
    Punct::x0 = x0;
}
int Punct::getY0() const {
    return y0;
}
void Punct::setY0(int y0) {
    Punct::y0 = y0;
}
const Coordonata &Punct::getCoordonata() const {
    return coordonata;
}
void Punct::setCoordonata(const Coordonata &coordonata) {
    Punct::coordonata = coordonata;
}

std::ostream &operator<<(std::ostream &os, const Punct &punct) {
    os << "Punct. Tip figura: " << punct.getTip() << ".";
    os << " x0: " << punct.getX0() << " y0: " << punct.getY0() << " coordonata: "
       << punct.coordonata;
    return os;
}
Punct Punct::operator + (Factor const &factor) {
    x0 += factor.getX();
    y0 += factor.getY();
    coordonata = Coordonata(x0, y0);
}
Punct Punct::operator * (Factor const &factor) {
    x0 *= factor.getX();
    y0 *= factor.getY();
    coordonata = Coordonata(x0, y0);
}

void Punct::translate(Punct& figura, Factor const &factor) {
    figura.setX0(figura.getX0() + factor.getX());
    figura.setY0(figura.getY0() + factor.getY());
}
void Punct::scale(Punct& figura, Factor const &factor) {
    figura.setX0(figura.getX0() * factor.getX());
    figura.setY0(figura.getY0() * factor.getY());
}
void Punct::afisareFigura() {
    std::cout << "Punct!";
}

