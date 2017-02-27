#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double dist(double x1, double x2, double y1, double y2){
    return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

int main(){
    double x1, x2, x3, y1, y2, y3, a, b, c, r;
    cin >> x1 >> y1
        >> x2 >> y2
        >> x3 >> y3;
    a = dist(x1, x2, y1, y2);
    b = dist(x2, x3, y2, y3);
    c = dist(x3, x1, y3, y1);
    r = (a*b*c)/sqrt((a+b+c)*(b+c-a)*(c+a-b)*(a+b-c));
    
    cout << fixed << setprecision(0);
    cout << ceil(M_PI*r*r) << endl;
    return 0;
}
