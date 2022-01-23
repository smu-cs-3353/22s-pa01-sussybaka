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



/**********************
 **    createFile    **
 *********************/
void BruteForce::createFile(std::string& inFileName) {
    // Create the new filename to write to
    std::string outFileName = inFileName;
    if (outFileName[0] == '/') {
        outFileName = outFileName.substr(1, outFileName.size());
    }
    while (outFileName[outFileName.size()-1] != '.') { // Remove the ending
        outFileName = outFileName.substr(0, outFileName.size()-1);
    }
    outFileName = outFileName.substr(0, outFileName.size()-1);

    std::string subOutFileName;
    while (outFileName[outFileName.size()-1] != '/') { // Get the name of the file
        subOutFileName += outFileName[outFileName.size()-1];
        outFileName = outFileName.substr(0, outFileName.size()-1);
        //outFileName = outFileName.substr(1, outFileName.size());
    }
    reverse(subOutFileName.begin(), subOutFileName.end());

    subOutFileName = std::string("output/") + subOutFileName + std::string("-bruteforce.txt");
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

    // With the best combination found, send the contents to an output file
    createFile(data.inFileName);
}