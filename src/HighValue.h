// Trevor Dowohm
// Gabriel Mongaras
// Algoworithms
#ifndef INC_22S_PA01_SUSSYBAKA_HIGHVALUE_H
#define INC_22S_PA01_SUSSYBAKA_HIGHVALUE_H

#include <vector>
#include <algorithm>
#include "Picture.h"
#include "Loader.h"
#include <bits/stdc++.h>

// High Value Algoworithm! (◕‿◕✿) This Algorithm
// sorts the pictures from highest value to lowest
// value, then takes the best pictures in this
// constraint as the preferred combination. Just like
// I value this class so much ʕ·ᴥ·ʔ ʕ·ᴥ·ʔ ʕ·ᴥ·ʔ Hehe ^w^
class HighValue {
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

    HighValue();
    HighValue(Loader& data);

    /**
     * runHighValue Method! (づ｡◕‿‿◕｡)づ ＼（＾○＾）人（＾○＾）／
     * Find the best possible combination using picture values
     * @param data A Loader object with the loaded data
     **/

    void runHighValue(Loader& data);

};

#endif //INC_22S_PA01_SUSSYBAKA_HIGHVALUE_H