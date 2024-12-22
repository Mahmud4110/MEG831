#include "gridgen.h"

void gridgen(int Nx, int Ny, double XL, double YL, std::vector<std::vector<double>> &x, std::vector<std::vector<double>> &y) {
    double dx = XL / Nx;
    double dy = YL / Ny;

    for (int i = 0; i <= Nx; ++i) {
        for (int j = 0; j <= Ny; ++j) {
            x[i][j] = i * dx;
            y[i][j] = j * dy;
        }
    }
}
