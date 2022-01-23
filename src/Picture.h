// Trevor Dohm
// Gabriel Mongaras
// Algorithms
#ifndef INC_22S_PA01_SUSSYBAKA_PICTURE_H
#define INC_22S_PA01_SUSSYBAKA_PICTURE_H

#include <fstream>

// Picture Class! Holds the specifications
// of all the pictures in the input file!
// It's so cute that each picture gets its
// own individual attention! I wish I got
// that much attention TwT o(╥﹏╥)o
class Picture {
public:
    int ID; // The ID of the picture
    float Value; // The value of the picture
    int Width; // The width of the picture
    int Height; // The height of the picture
    double rankVal; // The rank value of the picture

    /**
     * Constructowors!
     **/

    Picture();
    Picture(int id, float val, int width, int height, double rank);

    /**
     * Overloaded Outstream Operator! ヾ(＠⌒▽⌒＠)ﾉ
     * @param out The stream to send the object data to
     * @param pic The picture to send to the outstream
     * @return The outstream with the object data sent to it
     **/

    friend std::ofstream& operator<< (std::ofstream& out, Picture& pic);

    /**
     * Overloaded > < Operators! ❀◕ ‿ ◕❀
     * @param compPic Picture being compared against
     * @return The truth value of the operator
     */

    bool operator< (Picture& compPic);
    bool operator> (Picture& compPic);

};

#endif //INC_22S_PA01_SUSSYBAKA_PICTURE_H