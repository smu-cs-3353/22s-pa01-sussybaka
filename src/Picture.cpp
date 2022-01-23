// Trevor Dohm
// Gabriel Mongaras
// Algorithms
#include "Picture.h"

 /***********************
 **    Constructors    **
 ***********************/

// Default constructor
Picture::Picture() {
    ID = 0;
    Value = 0.0;
    Width = 0;
    Height = 0;
    rankVal = 0;
}

// Overloaded constructor
Picture::Picture(int id, float val, int width, int height, double rank) {
    ID = id;
    Value = val;
    Width = width;
    Height = height;
    rankVal = rank;
}

 /****************************************
 **    Overloaded Outstream Operator    **
 ****************************************/

std::ofstream& operator<< (std::ofstream& out, Picture& pic) {
    out << pic.ID << " " << pic.Value << " " << pic.Width << " " << pic.Height << std::endl;
    return out;
}

 /***************************************
 **      Overloaded > < Operators      **
 ****************************************/
bool Picture::operator<(Picture &compPic) {
    return compPic.Value < Value;
}

bool Picture::operator>(Picture &compPic) {
    return compPic.Value > Value;
}