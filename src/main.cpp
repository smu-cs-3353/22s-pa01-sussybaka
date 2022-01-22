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
        std::cout << "Program must have at least one argument" << std::endl;
        return 1;
    }

    // Create a loader object using the given filename
    Loader l;
    std::string temp(argv[1]);
    l.loadData(temp);

    SussyBakaRunner SBR;
    SBR.loadData(argv[1]);
    SBR.runBruteForce();
    SBR.runHighValue();
    SBR.runCustom();

    std::cout << std::endl;
    return 0;
}