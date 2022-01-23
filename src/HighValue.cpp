//
// Created by LFL on 1/23/2022.
//

#include "HighValue.h"

/**********************
 **    findCombos    **
 *********************/
void HighValue::sortPictures(int index, Loader& data) {

    std::sort(data.pictures.begin(), data.pictures.end());
    int curWidth = 0;

    // Iterate over all pictures in the vector
    while (curWidth + data.pictures[index].Width < maxWidth) {
        // The current picture in iteration
        Picture curPic = data.pictures[index];

        // Updating the best combo stats
        bestCombo.emplace_back(curPic);
        bestPrice = bestPrice + curPic.Value;
        curWidth = curWidth + curPic.Width;

        // Update iterator
        ++index;

        // If the cur width of the best combo is greater
        // than the maximum width, skip this iteration
        if (curWidth > maxWidth) {
            continue;
        }
    }
}

/**********************
 **    createFile    **
 *********************/
void HighValue::createFile(std::string& inFileName) {
    // Remove all characters at the end of the filename after the "." character
    std::string outFileName = inFileName;
    while (outFileName[outFileName.size()-1] != '.') { // Remove the ending
        outFileName = outFileName.substr(0, outFileName.size()-1);
    }
    outFileName = outFileName.substr(0, outFileName.size()-1);

    // Remove all characters after the "/" character and store each character
    // for later use
    std::string subOutFileName;
    while (outFileName[outFileName.size()-1] != '/') { // Get the name of the file
        subOutFileName += outFileName[outFileName.size()-1];
        outFileName = outFileName.substr(0, outFileName.size()-1);
    }
    reverse(subOutFileName.begin(), subOutFileName.end());

    // Create the final output filename
    subOutFileName = std::string("output/") + subOutFileName + std::string("-highvalue.txt");
    if (outFileName[0] == '.' && outFileName[1] == '.') {
        subOutFileName = std::string("../") + subOutFileName;
    }

    // Open a file for writing
    std::ofstream outFile(subOutFileName);

    // If the file could not be opened, throw an error
    if (!outFile) {
        throw std::runtime_error("Outfile named " + subOutFileName + " could not be opened.");
    }

    // Add the price of the best picture combination to the file
    outFile << bestPrice << std::endl;

    // Add each image in the best picture combination to the file
    for (Picture& p : bestCombo) {
        outFile << p;
    }

    // Close the file
    outFile.close();
    std::cout << std::endl;
}


/************************
 **    Constructors    **
 ***********************/
HighValue::HighValue() {
    bestPrice = 0.0;

    maxHeight = 1000000;
    maxWidth = 1000000;
    maxImages = 100000;
}
HighValue::HighValue(Loader &data) {
    bestPrice = 0.0;
    maxImages = 100000;

    // Run the high value algorithm
    runHighValue(data);
}



/*************************
 **    runBruteForce    **
 ************************/
void HighValue::runHighValue(Loader &data) {
    // Store the maximum width and height
    maxWidth = data.wallDimensions[0];
    maxHeight = data.wallDimensions[1];

    // Run sorter to find highest priced pictures
    sortPictures(0, data);

    // After sorting and finding high value combination,
    // create the file to store the combination
    createFile(data.inFileName);
}