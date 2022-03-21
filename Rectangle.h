#include "Line.h"
class Rectangle{
  public:
    void print();
    double calcArea();
    double calcPer();
    Rectangle();
    Rectangle(Line w, Line l);
    // Rectangle(Point ws, Point we, Point ls, Point le);
  private:
    Line width;
    Line length;
    // Line width(Point(0,4),Point(0,0));
    // Line length(Point(0,0), Point(8,0));
};