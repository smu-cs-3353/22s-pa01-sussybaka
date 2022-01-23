//
// Created by LFL on 1/23/2022.
//

#include "HighValue.h"

/**********************
 **    findCombos    **
 *********************/
void HighValue::sortPictures(int index, Loader& data) {

    std::sort(data.pictures.begin(), data.pictures.end());


    // Iterate over all pictures in the vector
    for (int i = index; i < data.totalPieces; i++) {

        // First finish the sorted vector
        // Then do best combination and price

        // The current picture in iteration
        Picture curPic = data.pictures[i];

        // Copy the buffer and add a value to it
        std::vector<Picture> newBuffer = buffer;
        newBuffer.emplace_back(curPic);

        // Update the current buffer value
        float newBufferPrice = bufferPrice + curPic.Value;

        // Update the current width of the picture buffer
        int newWidth = curWidth + curPic.Width;

        // If the new width of the picture buffer is greater
        // than the maximum width, skip this iteration
        if (newWidth > maxWidth) {
            continue;
        }

        // Add the new buffer to the combinations
        combinations.emplace_back(newBuffer);

        // If the new buffer price is greater than the current best price,
        // replace the best price and best buffer with the current ones
        if (newBufferPrice > bestPrice) {
            bestCombo = newBuffer;
            bestPrice = newBufferPrice;
        }

        // Get all possible combinations using the new buffer
        findCombos(i+1, newBuffer, newBufferPrice, newWidth, data);
    }
}



/************************
 **    Constructors    **
 ***********************/
HighValue::HighValue() {
    bestPrice = -1.0;

    maxHeight = 1000000;
    maxWidth = 1000000;
    maxImages = 100000;
}
HighValue::HighValue(Loader &data) {
    bestPrice = -1.0;
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