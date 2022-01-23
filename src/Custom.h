// Trevor Dowohm
// Gabriel Mongaras
// Algoworithms
#ifndef INC_22S_PA01_SUSSYBAKA_CUSTOM_H
#define INC_22S_PA01_SUSSYBAKA_CUSTOM_H

#include <vector>
#include <algorithm>
#include "Picture.h"
#include "Loader.h"
#include <bits/stdc++.h>

// Custowom Algorithm! (◡‿◡✿) For this Algorithm, we
// decided to use a specified function (see Loader.cpp)
// to decide the rank of the pictures, then sorting the
// pictures based off these ratings, similarly to the
// High Value Algorithm. I find it so cuwute that these
// algoworithms are so similar! Hehe ^w^ =w= ._. >w<
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
     * sortPictures Method! \m/(>.<)\m/ ╘[◉﹃◉]╕ (ﾉ◕ヮ◕)ﾉ*:･ﾟ✧
     * While loop and C Sort Function that find the most optimal combination
     * @param data A Loader object with the loaded data
     **/

    void sortPictures(Loader& data);

    /**
     * createFile Method! (*≧ω<*)人(*ゝω≦*） 〜(￣▽￣〜)(〜￣▽￣)〜
     * Creates the output file for the best combination found
     * @param inFileName The input file name that will be adjusted for the output file
     **/

    void createFile(std::string& inFileName);

public:

    /**
     * Constructowors!
     **/

    Custom();
    Custom(Loader& data);


    /**
     * runCustom Method! (づ｡◕‿‿◕｡)づ ＼（＾○＾）人（＾○＾）／
     * Find the best possible combination using picture ranks
     * @param data A Loader object with the loaded data
     **/

    void runCustom(Loader& data);

};

#endif //INC_22S_PA01_SUSSYBAKA_CUSTOM_H