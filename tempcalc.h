#ifndef TEMPCALC_H
#define TEMPCALC_H

#include <vector>

// Function declarations
void input(double &T1, double &T2, double &T3, double &T4, double &XL, double &YL, int &Nx, int &Ny);
void echo(double T1, double T2, double T3, double T4, double XL, double YL, int Nx, int Ny);
void gridgen(int Nx, int Ny, double XL, double YL, std::vector<std::vector<double>> &x, std::vector<std::vector<double>> &y);
void gridecho(int Nx, int Ny, const std::vector<std::vector<double>> &x, const std::vector<std::vector<double>> &y);
void calculateTemperature(double T1, double T2, double T3, double T4, int Nx, int Ny, std::vector<std::vector<double>> &T);

#endif
