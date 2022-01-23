// Trevor Dowohm
// Gabriel Mongaras
// Algoworithms
#ifndef INC_22S_PA01_SUSSYBAKA_BRUTEFORCE_H
#define INC_22S_PA01_SUSSYBAKA_BRUTEFORCE_H

#include <vector>
#include "Picture.h"
#include "Loader.h"
#include <bits/stdc++.h>

// Wight here is da Bruwute Foworce Algoworithm! やった !
// It checks all possible combinations and finds the best
// combination in terms of value. It takes a weally long
// time, but it works everytime, and we love that (✿ ♥‿♥)
class BruteForce {
private:

    // Max values
    int maxWidth;
    int maxHeight;
    int maxImages;

    // Vector to hold all possible combinations! I
    // wish I could be held like that owo (●´ω｀●)
    std::vector<std::vector<Picture>> combinations;

    // Combination of pictures with the highest price
    std::vector<Picture> bestCombo;
    float bestPrice;

    /**
     * findCombos Method! \m/(>.<)\m/ ╘[◉﹃◉]╕ (ﾉ◕ヮ◕)ﾉ*:･ﾟ✧ ┌|_ _|┘♪└|-.-|┐♪┌|^.^|┘♪
     * Recursive function to find all possible combinations the data can form.
     * @param index Current index being iterated over in the Loader data vector
     * @param buffer Buffer to hold the current combination when iterating over all possible combinations
     * @param bufferPrice The price of the current combination in the buffer
     * @param curWidth The current width of the picture buffer
     * @param data A Loader object with the loaded data
     **/

    void findCombos(int index, std::vector<Picture>& buffer, float& bufferPrice, int& curWidth, Loader& data);

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

    BruteForce();
    BruteForce(Loader& data);


    /**
     * runBruteForce Method! (づ｡◕‿‿◕｡)づ ＼（＾○＾）人（＾○＾）／
     * Find the best possible combination using brute force
     * @param data A Loader object with the loaded data
     **/

    void runBruteForce(Loader& data);

};

#endif //INC_22S_PA01_SUSSYBAKA_BRUTEFORCE_H