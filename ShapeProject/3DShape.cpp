#include "3DShape.h"

3DShape(int a, int h) : Shape(a) {
this->h = h; //setH shte bude  i tva stava this->h = h;
}

 int 3DShape::calcArea(){
    cout << "3D shape area" << endl;
}
 void 3DShape::print(){//za strana a
cout << "In 3D the area is: " << endl;
}
int 3DShape::calcVolume(){
    cout << "3D Shape volume"
}
void setH(int h){
    this->h = h;
}
int getH(){
    return->this h;
}

private:
int h;

};
