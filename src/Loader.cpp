// Trevor Dowohm
// Gabriel Mongaras
// Algoworithms
#include "Loader.h"

 /***********************
 **    Constructors    **
 ***********************/

// Default constructor
Loader::Loader() {
    totalPieces = 0;
}

// Overloaded constructor
Loader::Loader(std::string& fileName) {
    totalPieces = 0;
    loadData(fileName);
}

 /*******************
 **    loadData    **
 *******************/

// Loads the data from the input file
void Loader::loadData(std::string &fileName) {

    // Store the file name
    inFileName = fileName;

    // Open file to load in the data
    std::ifstream inFile(fileName);

    // If the file is not open, raise an error
    if (!inFile) {
        throw std::runtime_error("Input file not found");
    }

    // Buffer to read in a line
    std::string line;

    // Read in the wall dimensions
    std::getline(inFile, line);
    std::vector<std::string> temp = tokStr(line, " ");
    for (std::string& s : temp) {
        wallDimensions.emplace_back(std::stoi(s));
    }

    // Read in the number of pictures
    std::getline(inFile, line);
    totalPieces = std::stoi(line);

    // For every picture, load in the picture data
    for (int i = 0; i < totalPieces; i++) {
        // Load in the line
        std::getline(inFile, line);

        // Break up the line
        temp = tokStr(line, " ");

        // Get the rank of the picture (Rank function)
        double rank = std::pow(std::stoi(temp[2]), 2)/(wallDimensions[0]*std::stof(temp[1]));

        // Store the picture information
        pictures.emplace_back(Picture(std::stoi(temp[0]), std::stof(temp[1]), std::stoi(temp[2]), std::stoi(temp[3]), rank));
    }

    // Close the file
    inFile.close();

}