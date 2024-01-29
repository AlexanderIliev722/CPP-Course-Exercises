#include <iostream>
#include "Point.h"
#include "Rectangle.h"

using namespace std;

int main()
{
Point p1(5,0);
Point p2(10,0);
Point p3(5, 10);
Point p4(10,10);

Rectangle r(p1,p2, p3, p4);
cout << r.isRectangle() << endl;
cout << r.isSquare() << endl;

    cout << "Hello world!" << endl;
    return 0;
}
