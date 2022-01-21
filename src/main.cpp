// Trevor Dohm
// Gabriel Mongaras
// Algorithms
#include <iostream>
#include "SussyBakaRunner.h"

// Hewwo! (ﾉ◕ヮ◕)ﾉ*:･ﾟ✧ Dis is our new pwoject! We worked
// weally hawd on it and i hope you enjoy! ★~(◡﹏◕✿)
int main(int argc, char* argv[]) {
    SussyBakaRunner SBR;
    SBR.loadData(argv[1]);
    SBR.runBruteForce();
    SBR.runHighValue();
    SBR.runCustom();
    return 0;
}