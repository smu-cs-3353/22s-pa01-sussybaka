#include "Picture.h"



/************************
 **    Constructors    **
 ***********************/
Picture::Picture() {
    ID = 0;
    Value = 0.0;
    Width = 0;
    Height = 0;
}

Picture::Picture(int id, float val, int width, int height) {
    ID = id;
    Value = val;
    Width = width;
    Height = height;
}