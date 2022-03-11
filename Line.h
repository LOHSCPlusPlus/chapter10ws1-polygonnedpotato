#include "Point.h"
// struct Line;
class Line{
  public:
    void print();
    double lineLength();
    Line(Point s, Point e);
  private:
    Point start;
    Point end;
};