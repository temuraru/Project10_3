#include <iostream>
#include "Rectangle.h"

int main() {
    Punct punct = Punct();
    Rectangle rectangle = Rectangle();
    Factor f_translatare(18, 35);
    Factor f_scalare(2, 4);
//    testPunct(f_translatare, f_scalare);
    std::cout << punct << std::endl;
    std::cout << rectangle << std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
