//
// Created by LFL on 1/23/2022.
//

#include "HighValue.h"

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