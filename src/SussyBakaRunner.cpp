// Trevor Dohm
// Gabriel Mongaras
// Algorithms
#include "SussyBakaRunner.h"

void SussyBakaRunner::loadData(char* inputFile) {
    std::string temp(inputFile);
    l.loadData(temp);
}

void SussyBakaRunner::runBruteForce() {
    BruteForce BF;
    BF.runBruteForce(l);
}

void SussyBakaRunner::runHighValue() {

}

void SussyBakaRunner::runCustom() {

}