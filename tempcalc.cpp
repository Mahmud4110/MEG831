#include <iostream>
#include <vector>
#include "main.h"

void calculateTemperature(double T1, double T2, double T3, double T4, int Nx, int Ny, std::vector<std::vector<double>> &T) {
    // Set boundary conditions
    for (int i = 0; i <= Nx; ++i) {
        T[i][0] = T1;         // Bottom boundary
        T[i][Ny] = T3;        // Top boundary
    }
    for (int j = 0; j <= Ny; ++j) {
        T[0][j] = T4;         // Left boundary
        T[Nx][j] = T2;        // Right boundary
    }

    // Iteratively solve for interior points using the finite difference method
    bool converged = false;
    int maxIter = 10000;
    double tol = 1e-6;
    int iter = 0;

    while (!converged && iter < maxIter) {
        converged = true;
        for (int i = 1; i < Nx; ++i) {
            for (int j = 1; j < Ny; ++j) {
                double T_new = 0.25 * (T[i+1][j] + T[i-1][j] + T[i][j+1] + T[i][j-1]);
                if (std::abs(T_new - T[i][j]) > tol) {
                    converged = false;
                }
                T[i][j] = T_new;
            }
        }
        ++iter;
    }

    if (iter >= maxIter) {
        std::cout << "Warning: Solution did not converge after " << maxIter << " iterations.\n";
    }
}



// #include <iostream>
// #include <vector>
// #include "tempcalc.h"

// // Input function
// void input(double &T1, double &T2, double &T3, double &T4, double &XL, double &YL, int &Nx, int &Ny) {
//     std::cout << "Enter boundary temperatures T1 (bottom), T2 (right), T3 (top), T4 (left): ";
//     std::cin >> T1 >> T2 >> T3 >> T4;
//     std::cout << "Enter dimensions XL (length in X direction), YL (length in Y direction): ";
//     std::cin >> XL >> YL;
//     std::cout << "Enter number of divisions Nx (in X direction), Ny (in Y direction): ";
//     std::cin >> Nx >> Ny;
// }

// // Echo function
// void echo(double T1, double T2, double T3, double T4, double XL, double YL, int Nx, int Ny) {
//     std::cout << "\nBoundary Temperatures:\n";
//     std::cout << "T1 (bottom) = " << T1 << ", T2 (right) = " << T2 << ", T3 (top) = " << T3 << ", T4 (left) = " << T4 << "\n";
//     std::cout << "Dimensions: XL = " << XL << ", YL = " << YL << "\n";
//     std::cout << "Divisions: Nx = " << Nx << ", Ny = " << Ny << "\n\n";
// }

// // Grid generation function
// void gridgen(int Nx, int Ny, double XL, double YL, std::vector<std::vector<double>> &x, std::vector<std::vector<double>> &y) {
//     double dx = XL / Nx;
//     double dy = YL / Ny;

//     for (int i = 0; i <= Nx; ++i) {
//         for (int j = 0; j <= Ny; ++j) {
//             x[i][j] = i * dx;
//             y[i][j] = j * dy;
//         }
//     }
// }

// // Grid echo function
// void gridecho(int Nx, int Ny, const std::vector<std::vector<double>> &x, const std::vector<std::vector<double>> &y) {
//     std::cout << "\nGrid Geometry:\n";
//     for (int i = 0; i <= Nx; ++i) {
//         for (int j = 0; j <= Ny; ++j) {
//             std::cout << "(" << x[i][j] << ", " << y[i][j] << ") ";
//         }
//         std::cout << "\n";
//     }
//     std::cout << "\n";
// }

// // Temperature calculation function
// void calculateTemperature(double T1, double T2, double T3, double T4, int Nx, int Ny, std::vector<std::vector<double>> &T) {
//     // Set boundary conditions
//     for (int i = 0; i <= Nx; ++i) {
//         T[i][0] = T1;         // Bottom boundary
//         T[i][Ny] = T3;        // Top boundary
//     }
//     for (int j = 0; j <= Ny; ++j) {
//         T[0][j] = T4;         // Left boundary
//         T[Nx][j] = T2;        // Right boundary
//     }

//     // Iteratively solve for interior points using the finite difference method
//     bool converged = false;
//     int maxIter = 10000;
//     double tol = 1e-6;
//     int iter = 0;

//     while (!converged && iter < maxIter) {
//         converged = true;
//         for (int i = 1; i < Nx; ++i) {
//             for (int j = 1; j < Ny; ++j) {
//                 double T_new = 0.25 * (T[i+1][j] + T[i-1][j] + T[i][j+1] + T[i][j-1]);
//                 if (std::abs(T_new - T[i][j]) > tol) {
//                     converged = false;
//                 }
//                 T[i][j] = T_new;
//             }
//         }
//         ++iter;
//     }

//     if (iter >= maxIter) {
//         std::cout << "Warning: Solution did not converge after " << maxIter << " iterations.\n";
//     }
// }
