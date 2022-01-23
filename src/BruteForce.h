#ifndef INC_22S_PA01_SUSSYBAKA_BRUTEFORCE_H
#define INC_22S_PA01_SUSSYBAKA_BRUTEFORCE_H

#include <vector>
#include "Picture.h"
#include "Loader.h"



class BruteForce {
private:
    // Max values
    const int maxWidth = 1000000;
    const int maxHeight = 1000000;
    const int maxImages = 100000;

    // Vector to hold all possible combinations
    std::vector<std::vector<Picture>> combinations;

    // Combination of pictures with the highest price
    std::vector<Picture> bestCombo;
    int bestPrice;





    /**
     * findCombos Method
     * Recursive function to find all possible combinations the data can form.
     * @param index Current index being iterated over in the Loader data vector
     * @param buffer Buffer to hold the current combination when iterating
     *               over all possible combinations
     * @param curWidth The current width of the picture buffer
     * @param data A Loader object with the loaded data
     */
    void findCombos(int index, std::vector<Picture>& buffer, int curWidth, Loader& data);


public:
    /**
     * runBruteForce Method
     * Find the best possible combination using brute force
     * @param data A Loader object with the loaded data
     */
    void runBruteForce(Loader& data);
};



#endif //INC_22S_PA01_SUSSYBAKA_BRUTEFORCE_H
