#include <iostream>
using namespace std;

int main(){
    int t,w,h,a,b,r,c;
    cin >> t;
    while(t--){
        cin >> w >> h >>
            a >> b >> r;
        c=0;
        for(double x=0.5;x<w;x++){
            for(double y=0.5;y<h;y++){
                if((x-a)*(x-a)+(y-b)*(y-b) <= r*r)c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}
