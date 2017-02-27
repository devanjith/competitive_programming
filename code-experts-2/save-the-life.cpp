#include <iostream>
using namespace std;

int main () {
    int cases;
    cin >> cases;
    while (cases--){
        double d;
        cin >> d;
        int n = (int) d;
        int k = 1<<30;
        while (! (n & k)) k >>= 1;
        cout << ((n ^ k) << 1) + 1 << endl;
    }
    return 0;
}
