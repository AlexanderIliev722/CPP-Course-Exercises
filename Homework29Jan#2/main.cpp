#include <iostream>

using namespace std;

class Shape {
public:
  virtual void draw() = 0; //pure virtual function
};

//Със set и get методи
class Circle : public Shape {
public:
  Circle(int r) {
    setR(r);
  }
  void setR(int r){
    radius = r;
  }
  int getR(){
    return radius;
  }
  void draw() override {
    std::cout << "Draw a circle with radius " << getR() << std::endl;
  }

private:
  int radius;
};

//Директно, без set-ове и get-ове
class Rectangle : public Shape {
public:
  Rectangle(int w, int l) : width(w), length(l) {

  }

  void draw() override {
    std::cout << "Draw a rectangle with width " << width << " and length " << length << std::endl;
  }

private:
  int width;
  int length;
};

int main() {
  // Създаване на указатели към обекти от класовете Circle и Rectangle
  Shape* circle = new Circle(6);
  Shape* rectangle = new Rectangle(10, 20);

  // Извикване на метода draw() за всеки обект
  circle->draw();
  rectangle->draw();

  return 0;
}






