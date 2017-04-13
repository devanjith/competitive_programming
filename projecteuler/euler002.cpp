/*
 * euler002.cpp - even fibonacci numbers
 * */
#include <iostream>
using namespace std;

unsigned long efs(unsigned long n){
    unsigned long sum=0, a=2, b=0, c=a;
    while(c<n){
        sum += c;
        c = 4*a + b;
        b = a;
        a = c;
    }
    return sum;
}

int main(){
    unsigned long t, n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << efs(n) << endl;
    }
    return 0;
}
