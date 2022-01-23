// Trevor Dohm
// Gabriel Mongaras
// Algorithms
#include "SussyBakaRunner.h"

void SussyBakaRunner::loadData(char* inputFile) {
    std::string temp(inputFile);
    l.loadData(temp);
}

void SussyBakaRunner::runBruteForce() {
    BruteForce BF(l);
}

void SussyBakaRunner::runHighValue() {
    HighValue HV(l);
}

void SussyBakaRunner::runCustom() {
    Custom C(l);
}