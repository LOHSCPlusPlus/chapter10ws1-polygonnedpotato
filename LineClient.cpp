#include "Line.h"
#include <iostream>
using namespace std;
int main() {
    Point a(76,23);
    Point b(1,-3);
    Line ln(a,b);
    ln.print();
    cout<<ln.lineLength();
    return 0;
}
