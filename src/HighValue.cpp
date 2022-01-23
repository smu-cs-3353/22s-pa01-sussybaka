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
    int i = 0;

    // Iterate over all pictures in the vector
    while (curWidth + data.pictures[i].Width < maxWidth) {
        // The current picture in iteration
        Picture curPic = data.pictures[i];

        // Updating best combo stats
        bestCombo.emplace_back(curPic);
        bestPrice = bestPrice + curPic.Value;
        curWidth = curWidth + curPic.Width;

        std::cout << curPic.Value << std::endl;

        // Update i
        ++i;

        // If the cur width of the best combo is greater
        // than the maximum width, skip this iteration
        if (curWidth > maxWidth) {
            continue;
        }
    }
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
//    createFile(data.inFileName);
}