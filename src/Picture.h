#ifndef INC_22S_PA01_SUSSYBAKA_PICTURE_H
#define INC_22S_PA01_SUSSYBAKA_PICTURE_H



class Picture {
public:
    int ID; // The ID of the picture
    float Value; // The value of the picture
    int Width; // The width of the picture
    int Height; // The height of the picture


    /**
     * Constructors
     */
    Picture();
    Picture(int id, float val, int width, int height);
};



#endif //INC_22S_PA01_SUSSYBAKA_PICTURE_H
