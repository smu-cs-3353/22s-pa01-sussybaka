// Trevor Dohm
// Gabriel Mongaras
// Algorithms
#include <iostream>
#include "SussyBakaRunner.h"

int main(int argc, char* argv[]) {
    SussyBakaRunner SBR;
    SBR.loadData(argv[1]);
    SBR.runBruteForce();
    SBR.runHighValue();
    SBR.runCustom();
    return 0;
}