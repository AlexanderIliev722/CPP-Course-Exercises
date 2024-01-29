#ifndef 3DSHAPE_H_INCLUDED
#define 3DSHAPE_H_INCLUDED


using namespace std;


class 2DShape : public Shape{
public:
3DShape(int, int );
virtual int calcArea();
virtual void print();
int calcVolume();
void setH(int);
int getH();

private:
int h;

};
#endif // 3DSHAPE_H_INCLUDED
