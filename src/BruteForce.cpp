#include "BruteForce.h"



/**********************
 **    findCombos    **
 *********************/
void BruteForce::findCombos(int index, std::vector<Picture>& buffer, float& bufferPrice, int& curWidth, Loader& data) {
    // Iterate over all pictures in the vector
    for (int i = index; i < data.totalPieces; i++) {
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
BruteForce::BruteForce() {
    bestPrice = -1.0;
}
BruteForce::BruteForce(Loader &data) {
    bestPrice = -1.0;

    // Run the brute force algorithm
    runBruteForce(data);
}



/*************************
 **    runBruteForce    **
 ************************/
void BruteForce::runBruteForce(Loader &data) {
    // Find all possible combinations the data can make up
    // but keeping the current size of all pictures below
    // the maximum size
    std::vector<Picture> buffer;
    float bufferPrice = 0.0;
    int curWidth = 0;
    findCombos(0, buffer, bufferPrice, curWidth, data);
}