/*
 * euler003.cpp - largest prime factor
 * */
#include <iostream>
using namespace std;

unsigned long lpf(unsigned long n){
    unsigned long lp=0, i=2;
    while(i*i <= n){
        if(n%i)i++;
        else {
            n /= i;
            lp = i;
        }
    }
    return max(lp, n);
}

int main(){
    unsigned long t, n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << lpf(n) << endl;
    }
    return 0;
}
