#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle() {
    setTip(3);
}
// constructor cu parametri dati printr-un punct reprezentand varful din stanga sus si doua numere reprezentand laturile in pixeli
Rectangle::Rectangle(Punct p, int dx, int dy) {
    x0 = p.getCoordonata().getX();
    y0 = p.getCoordonata().getY();
    x1 = x0 + dx;
    y1 = y0 + dy;
    setTip(3);
}
// constructor cu parametri dati prin coordonatele celor 2 varfuri: stanga-sus si dreapta-jos
Rectangle::Rectangle(int X0, int Y0, int X1, int Y1) {
    x0 = X0;
    y0 = Y0;
    x1 = X1;
    y1 = Y1;
    setTip(3);
}

Rectangle::~Rectangle() {}

int Rectangle::getX0() const {
    return x0;
}
void Rectangle::setX0(int x0) {
    Rectangle::x0 = x0;
}
int Rectangle::getY0() const {
    return y0;
}
void Rectangle::setY0(int y0) {
    Rectangle::y0 = y0;
}
int Rectangle::getX1() const {
    return x1;
}
void Rectangle::setX1(int x1) {
    Rectangle::x1 = x1;
}
int Rectangle::getY1() const {
    return y1;
}
void Rectangle::setY1(int y1) {
    Rectangle::y1 = y1;
}

std::ostream &operator<<(std::ostream &os, const Rectangle &rectangle) {
    os << "Dreptunghi. Tip figura: " << rectangle.getTip() << ".";
    os << " x0: " << rectangle.x0 << " y0: " << rectangle.y0 << " x1: "  << rectangle.x1 << " y1: " << rectangle.y1;
    return os;
}
Rectangle Rectangle::operator + (Factor const &factor) {
    x0 += factor.getX();
    y0 += factor.getY();
    x1 += factor.getX();
    y1 += factor.getY();
}
Rectangle Rectangle::operator * (Factor const &factor) {
    x0 *= factor.getX();
    y0 *= factor.getY();
    x1 *= factor.getX();
    y1 *= factor.getY();
}

void Rectangle::translate(Rectangle& figura, Factor const &factor) {
    figura.setX0(figura.getX0() + factor.getX());
    figura.setY0(figura.getY0() + factor.getY());
    figura.setX1(figura.getX1() + factor.getX());
    figura.setY1(figura.getY1() + factor.getY());
}
void Rectangle::scale(Rectangle& figura, Factor const &factor) {
    figura.setX0(figura.getX0() * factor.getX());
    figura.setY0(figura.getY0() * factor.getY());
    figura.setX1(figura.getX1() * factor.getX());
    figura.setY1(figura.getY1() * factor.getY());
}
void Rectangle::afisareFigura() {
    std::cout << "Dreptunghi";
}

int Rectangle::getArea() {
    return (x1 - x0) * (y1 - y0);
}

