#ifndef INC_22S_PA01_SUSSYBAKA_PICTURE_H
#define INC_22S_PA01_SUSSYBAKA_PICTURE_H

#include <fstream>


class Picture {
public:
    int ID; // The ID of the picture
    float Value; // The value of the picture
    int Width; // The width of the picture
    int Height; // The height of the picture
    double rankVal; // The ranke value of the picture


    /**
     * Constructors
     */
    Picture();
    Picture(int id, float val, int width, int height, double rank);


    /**
     * Overloaded Outstream Operator
     * @param out The stream to send the object data to
     * @param pic The picture to send to the outstream
     * @return The outstream with the object data sent to it
     */
    friend std::ofstream& operator<< (std::ofstream& out, Picture& pic);

    /**
     * Overloaded Greater Than Operator
     * @param compPic Picture being compared against
     * @return The truth value of the operator
     */
    bool operator< (Picture& compPic);
    bool operator> (Picture& compPic);
};



#endif //INC_22S_PA01_SUSSYBAKA_PICTURE_H
