// Trevor Dowohm
// Gabriel Mongaras
// Algoworithms
#ifndef INC_22S_PA01_SUSSYBAKA_LOADER_H
#define INC_22S_PA01_SUSSYBAKA_LOADER_H

#include "Picture.h"
#include <fstream>
#include <vector>
#include <iostream>
#include "tokStr.h"
#include <cmath>

// Loader Class! Responsible for holding the
// input information for the algorithms to use.
class Loader {
public:

    std::vector<int> wallDimensions; // The dimensions of the wall
    int totalPieces; // The total number of pieces to pick from
    std::vector<Picture> pictures; // Array of information on "totalPieces" number of pictures
    std::string inFileName; // The name of the file to read in

    /**
     * Constructowors!
     **/

    Loader();
    Loader(std::string& fileName);

    /**
     * loadData Method! Loads the input file.
     * @param fileName Name of file to load in.
     **/

    void loadData(std::string& fileName);

};

#endif //INC_22S_PA01_SUSSYBAKA_LOADER_H