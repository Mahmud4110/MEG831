#include <iostream>
#include "gridecho.h"

void gridecho(int Nx, int Ny, const std::vector<std::vector<double>> &x, const std::vector<std::vector<double>> &y) {
    std::cout << "\nGrid Geometry:\n";
    for (int i = 0; i <= Nx; ++i) {
        for (int j = 0; j <= Ny; ++j) {
            std::cout << "(" << x[i][j] << ", " << y[i][j] << ") ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}

