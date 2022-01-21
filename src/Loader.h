#ifndef INC_22S_PA01_SUSSYBAKA_LOADER_H
#define INC_22S_PA01_SUSSYBAKA_LOADER_H


#include "Picture.h"
#include <iostream>
#include <vector>



class Loader {
private:
    std::vector<int> wallDimensions; // The dimensions of the wall
    int totalPieces;     // The total number of pieces to pick from
    std::vector<Picture> pictures;   // Array of information on "totalPieces" number of pictures

public:
    /**
     * Constructors
     */
    Loader();
    Loader(std::string& fileName);

    /**
     * loadData
     * @param fileName Name of file to load in.
     */
    void loadData(std::string& fileName);
};



#endif //INC_22S_PA01_SUSSYBAKA_LOADER_H
