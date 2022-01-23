#include "BruteForce.h"



/**********************
 **    findCombos    **
 *********************/
void BruteForce::findCombos(int index, std::vector<Picture>& buffer, int curWidth, Loader& data) {
    // Iterate over all pictures in the vector
    for (int i = index; i < data.totalPieces; i++) {
        // Copy the buffer and add a value to it
        std::vector<Picture> newBuffer = buffer;
        newBuffer.emplace_back(data.pictures[i]);

        // Update the current width of the picture buffer
        int newWidth = curWidth + data.pictures[i].Width;

        // If the new width of the picture buffer is greater
        // than the maximum width, skip this iteration
        if (newWidth > maxWidth) {
            continue;
        }

        // Add the new buffer to the combinations
        combinations.emplace_back(newBuffer);

        // Get all possible combinations using the new buffer
        findCombos(i+1, newBuffer, curWidth, data);
    }
}















/*************************
 **    runBruteForce    **
 ************************/
void BruteForce::runBruteForce(Loader &data) {
    // Find all possible combinations the data can make up
    // but keeping the current size of all pictures below
    // the maximum size
    std::vector<Picture> buffer;
    findCombos(0, buffer, 0, data);
}