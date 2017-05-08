
#ifndef PROJECT10_3_FIGURAPLANA_H
#define PROJECT10_3_FIGURAPLANA_H

#include <ostream>
#include "project10.cpp"
class FiguraPlana {
protected:
    int tip = -1;
public:
    int getTip() const;
    void setTip(int tip);
    virtual void afisareFigura() = 0;

    // overloaded operators
//    FiguraPlana & operator = (const FiguraPlana &figura);
//    virtual FiguraPlana operator + (Factor const &factor) const;
    friend std::ostream &operator<<(std::ostream &os, const FiguraPlana &plana);

//    virtual FiguraPlana& scale(Factor factor) = 0;
//    virtual FiguraPlana& translate(Factor const factor) = 0;
};

#endif //PROJECT10_3_FIGURAPLANA_H
