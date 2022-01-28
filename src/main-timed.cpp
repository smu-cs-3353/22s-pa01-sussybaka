// Trevor Dowohm
// Gabriel Mongaras
// Algoworithms
#include <iostream>
#include "SussyBakaRunner.h"
#include <chrono>

// Hewwo! (ﾉ◕ヮ◕)ﾉ*:･ﾟ✧ Dis is our new pwoject! We worked
// weally hawd on it and i hope you enjoy! ★~(◡﹏◕✿)
int main(int argc, char* argv[]) {

    // If argc is less than 2, stop the program
    if (argc < 2) {
        std::cout << "Program must have at least one argument. Usage:" << std::endl;
        std::cout << "./22s-pa01-sussybaka [Input File Name] [-b]" << std::endl;
        return 1;
    }

    SussyBakaRunner SBR;

    // Load the data
    std::cout << "Loading In Data..." << std::endl;
    SBR.loadData(argv[1]);
    std::cout << "Data Loaded!" << std::endl << std::endl;

    // Run the brute force algorithm if the user specified to do so
    if (argc < 3) {
        std::cout << "Not Running The Brute Force Algorithm" << std::endl << std::endl;
    }
    else {
        if (std::string(argv[2]) == std::string("-b")) {
            auto start = std::chrono::high_resolution_clock::now();
            std::cout << "Running the Brute Force algorithm..." << std::endl;
            SBR.runBruteForce();
            auto stop = std::chrono::high_resolution_clock::now();
            auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
            std::cout << "Brute Force Finished!" << std::endl;
            std::cout << "Time to finish Brute Force: " << ((float)duration.count())/1000 << " microseconds" << std::endl << std::endl;
        }
        else {
            std::cout << "Not Running The Brute Force Algorithm" << std::endl << std::endl;
        }
    }

    // Run the high value algorithm
    std::cout << "Running the High Value algorithm..." << std::endl;
    auto start = std::chrono::high_resolution_clock::now();
    SBR.runHighValue();
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    std::cout << "High Value Finished!" << std::endl;
    std::cout << "Time to finish High Value: " << ((float)duration.count())/1000 << " microseconds" << std::endl << std::endl;

    // Run the custom algorithm
    std::cout << "Running the Custom algorithm..." << std::endl;
    start = std::chrono::high_resolution_clock::now();
    SBR.runCustom();
    stop = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    std::cout << "Custom Finished!" << std::endl;
    std::cout << "Time to finish Custom: " << ((float)duration.count())/1000 << " microseconds" << std::endl;

    return 0;

}