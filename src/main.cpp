// Trevor Dohm
// Gabriel Mongaras
// Algorithms
#include <iostream>
#include "Loader.h"
#include "SussyBakaRunner.h"



// Hewwo! (ﾉ◕ヮ◕)ﾉ*:･ﾟ✧ Dis is our new pwoject! We worked
// weally hawd on it and i hope you enjoy! ★~(◡﹏◕✿)
int main(int argc, char* argv[]) {
    // If argc is less than 2, stop the program
    if (argc < 2) {
        std::cout << "Program must have at least one argument. Usage:" << std::endl;
        std::cout << "./22s-pa01-sussybaka [Input File Name]" << std::endl;
        return 1;
    }

    SussyBakaRunner SBR;

    // Load the data
    std::cout << "Loading In Data..." << std::endl;
    SBR.loadData(argv[1]);
    std::cout << "Data Loaded!" << std::endl << std::endl;

    // Run the brute force algorithm
    std::cout << "Running the Brute Force algorithm..." << std::endl;
    SBR.runBruteForce();
    std::cout << "Brute Force Finished!" << std::endl << std::endl;

    // Run the high value algorithm
    std::cout << "Running the High Value algorithm..." << std::endl;
    SBR.runHighValue();
    std::cout << "High Value Finished!" << std::endl << std::endl;

    // Run the custom algorithm
    std::cout << "Running the Custom algorithm..." << std::endl;
    SBR.runCustom();
    std::cout << "Custom Finished!" << std::endl;

    return 0;
}