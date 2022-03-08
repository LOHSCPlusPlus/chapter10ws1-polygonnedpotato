#include "Point.h"
#include <math.h>
#include <iostream>
using namespace std;

// Notice how when we use field names in the functions that
// belong to Point, we can just use the name without a dot operator.
Point::Point() {
    x = 0.0;
    y = 0.0;
}
Point::Point(double xVal, double yVal){
	x=xVal;
	y=yVal;
}
// double Point::getX() {
//     return x;
// }
// double Point::getY() {
//     return y;
// }
// void Point::setX(double xVal) {
//     x = xVal;
// }
// void Point::setY(double yVal) {
//     y = yVal;
// }
void Point::print(){
  cout<<"x:\t"<<x<<"\ny:\t"<<y<<endl;
}
double Point::calcDistance(Point a){
  return sqrt(pow(x-a.x,2)+pow(y-a.y,2));
}