
#include "FiguraPlana.h"

int FiguraPlana::getTip() const {
    return tip;
}

void FiguraPlana::setTip(int tip) {
    FiguraPlana::tip = tip;
}

std::ostream &operator<<(std::ostream &os, const FiguraPlana &plana) {
    os << "Figura de baza. Tip figura: " << plana.tip;
    return os;
}

//FiguraPlana &FiguraPlana::operator=(const FiguraPlana &other) {
//    if (this != &other) // protect against invalid self-assignment
//    {
//        tip = other.tip;
//    }
//    // by convention, always return *this
//    return *this;
//}
