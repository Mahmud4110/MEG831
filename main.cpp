#include <iostream>
#include <vector>
#include "input.h"      // Include the input header
#include "echo.h"       // Include the echo header
#include "gridgen.h"    // Include the gridgen header
#include "gridecho.h"   // Include the gridecho header
#include "tempcalc.h"   // Include the tempcalc header

int main() {
    // Declare variables
    double T1, T2, T3, T4, XL, YL;
    int Nx, Ny;

    // Add debugging statements to trace program execution
    std::cout << "Starting program..." << std::endl;

    // Input step
    std::cout << "Before input function call..." << std::endl;
    input(T1, T2, T3, T4, XL, YL, Nx, Ny);  // Call the input function
    std::cout << "After input function call..." << std::endl;

    // Echo the input data
    std::cout << "Before echo function call..." << std::endl;
    echo(T1, T2, T3, T4, XL, YL, Nx, Ny);  // Call the echo function
    std::cout << "After echo function call..." << std::endl;

    // Grid generation step
    std::cout << "Before grid generation..." << std::endl;
    std::vector<std::vector<double>> x(Nx + 1, std::vector<double>(Ny + 1));
    std::vector<std::vector<double>> y(Nx + 1, std::vector<double>(Ny + 1));
    gridgen(Nx, Ny, XL, YL, x, y);  // Generate the grid
    std::cout << "After grid generation..." << std::endl;

    // Print grid geometry
    std::cout << "Before grid echo function call..." << std::endl;
    gridecho(Nx, Ny, x, y);  // Echo the generated grid
    std::cout << "After grid echo function call..." << std::endl;

    // Temperature calculation step
    std::cout << "Before temperature calculation..." << std::endl;
    std::vector<std::vector<double>> T(Nx + 1, std::vector<double>(Ny + 1, 0.0));  // Initialize temperature array
    calculateTemperature(T1, T2, T3, T4, Nx, Ny, T);  // Perform calculations
    std::cout << "After temperature calculation..." << std::endl;

    // Print the final temperature distribution
    std::cout << "Temperature Distribution:\n";
    for (int i = 0; i <= Nx; ++i) {
        for (int j = 0; j <= Ny; ++j) {
            std::cout << T[i][j] << "   ";
        }
        std::cout << "\n";
    }

    std::cout << "Program finished successfully!" << std::endl;

    return 0;
}




// #include <iostream>
// #include <vector>
// #include "main.h"

// int main() {
//     // Declare variables
//     double T1, T2, T3, T4, XL, YL;
//     int Nx, Ny;

//     // Get input from the user
//     input(T1, T2, T3, T4, XL, YL, Nx, Ny);
//     echo(T1, T2, T3, T4, XL, YL, Nx, Ny);

//     // Generate the grid geometry
//     std::vector<std::vector<double>> x(Nx + 1, std::vector<double>(Ny + 1));
//     std::vector<std::vector<double>> y(Nx + 1, std::vector<double>(Ny + 1));
//     gridgen(Nx, Ny, XL, YL, x, y);
//     gridecho(Nx, Ny, x, y);

//     // Initialize and calculate the temperature distribution
//     std::vector<std::vector<double>> T(Nx + 1, std::vector<double>(Ny + 1, 0.0));
//     calculateTemperature(T1, T2, T3, T4, Nx, Ny, T);

//     // Print the final temperature distribution
//     std::cout << "Temperature Distribution:\n";
//     for (int i = 0; i <= Nx; ++i) {
//         for (int j = 0; j <= Ny; ++j) {
//             std::cout << T[i][j] << "   ";
//         }
//         std::cout << "\n";
//     }

//     return 0;
// }




// // #include <iostream>
// // #include <vector>
// // #include "tempcalc.h"

// // int main() {
// //     // Declare variables
// //     double T1, T2, T3, T4, XL, YL;
// //     int Nx, Ny;

// //     // Get input from the user
// //     input(T1, T2, T3, T4, XL, YL, Nx, Ny);
// //     echo(T1, T2, T3, T4, XL, YL, Nx, Ny);

// //     // Generate the grid geometry
// //     std::vector<std::vector<double>> x(Nx + 1, std::vector<double>(Ny + 1));
// //     std::vector<std::vector<double>> y(Nx + 1, std::vector<double>(Ny + 1));
// //     gridgen(Nx, Ny, XL, YL, x, y);
// //     gridecho(Nx, Ny, x, y);

// //     // Initialize and calculate the temperature distribution
// //     std::vector<std::vector<double>> T(Nx + 1, std::vector<double>(Ny + 1, 0.0));
// //     calculateTemperature(T1, T2, T3, T4, Nx, Ny, T);

// //     // Print the final temperature distribution
// //     std::cout << "Final Temperature Distribution:\n";
// //     for (int i = 0; i <= Nx; ++i) {
// //         for (int j = 0; j <= Ny; ++j) {
// //             std::cout << T[i][j] << " ";
// //         }
// //         std::cout << "\n";
// //     }

// //     return 0;
// // }
