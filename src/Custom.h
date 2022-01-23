#ifndef INC_22S_PA01_SUSSYBAKA_CUSTOM_H
#define INC_22S_PA01_SUSSYBAKA_CUSTOM_H


#include <vector>
#include <algorithm>
#include "Picture.h"
#include "Loader.h"
#include <bits/stdc++.h>


class Custom {
private:
    // Max values
    int maxWidth;
    int maxHeight;
    int maxImages;

    // Combination of pictures with the highest price
    std::vector<Picture> bestCombo;
    float bestPrice;





    /**
     * sortPictures Method
     * Recursive function to find all possible combinations the data can form.
     * @param data A Loader object with the loaded data
     */
    void sortPictures(Loader& data);

    /**
     * createFile
     * Creates the output file for the best combination found
     * @param inFileName The input file name that will be adjusted for the output file
     */
    void createFile(std::string& inFileName);


public:
    /**
     * Constructors
     */
    Custom();
    Custom(Loader& data);


    /**
     * runBruteForce Method
     * Find the best possible combination using brute force
     * @param data A Loader object with the loaded data
     */
    void runCustom(Loader& data);
};



#endif //INC_22S_PA01_SUSSYBAKA_CUSTOM_H
