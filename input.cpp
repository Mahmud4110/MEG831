#include <iostream>
#include "input.h"

void input(double &T1, double &T2, double &T3, double &T4, double &XL, double &YL, int &Nx, int &Ny) {
    std::cout << "Enter boundary temperatures T1 (bottom), T2 (right), T3 (top), T4 (left): ";
    std::cin >> T1 >> T2 >> T3 >> T4;
    std::cout << "Enter dimensions XL (length in X direction), YL (length in Y direction): ";
    std::cin >> XL >> YL;
    std::cout << "Enter number of divisions Nx (in X direction), Ny (in Y direction): ";
    std::cin >> Nx >> Ny;
}
