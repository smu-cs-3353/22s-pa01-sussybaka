// Trevor Dohm
// Gabriel Mongaras
// Algorithms
#ifndef INC_22S_PA01_SUSSYBAKA_SUSSYBAKARUNNER_H
#define INC_22S_PA01_SUSSYBAKA_SUSSYBAKARUNNER_H
#include "Loader.h"
#include "BruteForce.h"
#include "HighValue.h"
#include "Custom.h"

class SussyBakaRunner {

private:
    Loader l;

public:
    void loadData(char*);
    void runBruteForce();
    void runHighValue();
    void runCustom();

};

#endif //INC_22S_PA01_SUSSYBAKA_SUSSYBAKARUNNER_H