#include <iostream>
#include "echo.h"

void echo(double T1, double T2, double T3, double T4, double XL, double YL, int Nx, int Ny) {
    std::cout << "\nBoundary Temperatures:\n";
    std::cout << "T1 (bottom) = " << T1 << ", T2 (right) = " << T2 << ", T3 (top) = " << T3 << ", T4 (left) = " << T4 << "\n";
    std::cout << "Dimensions: XL = " << XL << ", YL = " << YL << "\n";
    std::cout << "Divisions: Nx = " << Nx << ", Ny = " << Ny << "\n\n";
}
