// Trevor Dowohm
// Gabriel Mongaras
// Algoworithms
#ifndef INC_22S_PA01_SUSSYBAKA_SUSSYBAKARUNNER_H
#define INC_22S_PA01_SUSSYBAKA_SUSSYBAKARUNNER_H

#include "Loader.h"
#include "BruteForce.h"
#include "HighValue.h"
#include "Custom.h"

// Class responsible for running
// all of the necessary methods.
class SussyBakaRunner {
public:
    Loader l;

    
    void loadData(char*);
    void runBruteForce();
    void runHighValue();
    void runCustom();

};

#endif //INC_22S_PA01_SUSSYBAKA_SUSSYBAKARUNNER_H