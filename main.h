#ifndef MAIN_H
#define MAIN_H

#include <vector>
#include "input.h"
#include "echo.h"
#include "gridgen.h"
#include "gridecho.h"

void calculateTemperature(double T1, double T2, double T3, double T4, int Nx, int Ny, std::vector<std::vector<double>> &T);

#endif
