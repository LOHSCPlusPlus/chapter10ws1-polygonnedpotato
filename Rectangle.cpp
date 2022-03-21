#include <iostream>
#include "Rectangle.h"
using namespace std;
// code snippet from answer i asked on stack overflow: https://stackoverflow.com/q/71550602/16865075
// Rectangle::Rectangle() :
//     width(Point(0,4), Point(0,0)),
//     length(Point(0,0), Point(8,0))
// {}
Rectangle::Rectangle():width(Point(0,4), Point(0,0)),length(Point(0,0), Point(8,0)){
  cerr<<"NO ARGUMENTS PASSED. USING DEFAULT DEFS!";
}
Rectangle::Rectangle(Line w,Line l):width(Point(0,4), Point(0,0)),length(Point(0,0), Point(8,0)){
  width=w;
  length=l;
  if(width.lineLength()!=w.lineLength()||length.lineLength()!=l.lineLength()){throw "RECTANGLE FAILED TO CONSTRUCT!";}
};
void Rectangle::print() {
  cout<<"width line:";
  width.print();
  cout<<"length line:";
  length.print();
}
double Rectangle::calcArea(){
  return width.lineLength()*length.lineLength();
}
double Rectangle::calcPer(){
  return (2*width.lineLength())+(2*length.lineLength());
}
//ignore this
// Rectangle::Rectangle(){
//   Line w(Point(0,4),Point(0,0));
//   width=w;
//   Line l(Point(0,0),Point(8,0));
//   length=l;
// }

// Rectangle::Rectangle(Point ws, Point we, Point ls, Point le) {
//   width=Line(ws,we);
//   length=Line(ls,le);
// }