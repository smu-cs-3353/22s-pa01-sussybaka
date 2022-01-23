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



/*****************************************
 **    Overloaded Outstream Operator    **
 ****************************************/
std::ofstream& operator<< (std::ofstream& out, Picture& pic) {
    out << pic.ID << " " << pic.Value << " " << pic.Width << " " << pic.Height << std::endl;

    return out;
}

/****************************************
 **  Overloaded Greater Than Operator  **
 ****************************************/
bool Picture::operator<(Picture &compPic) {
    return compPic.Value < Value;
}
