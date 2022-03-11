#include <iostream>
#include "Line.h"
using namespace std;
Line::Line(Point s, Point e){
  start=s;
  end=e;
}
void Line::print() {
  cout << " Start";
  start.print();
  cout << " End";
  end.print();
  cout << endl;
}
double Line::lineLength(){
  return start.calcDistance(end);
}