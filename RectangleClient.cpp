#include "Rectangle.h"
#include <iostream>
int main() {
  Rectangle testrect(Line(Point(0,5),Point(0,0)),Line(Point(0,0),Point(8,0)));
  //Rectangle rect(Point(0,4),Point(0,0),Point(0,0),Point(8,0));
  testrect.print();
  std::cout<<testrect.calcArea();
  std::cout<<testrect.calcPer();
  return 0;
}
