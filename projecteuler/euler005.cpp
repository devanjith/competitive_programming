/*
 * euler005.cpp - smallest multiple
 * */
#include <iostream>
using namespace std;

unsigned long gcd(unsigned long a, unsigned long b){
    unsigned long c;
    while(b){
        c = b;
        b = a%b;
        a = c;
    }
    return a;
}

unsigned long lcm(unsigned long a, unsigned long b){
    return a / gcd(a, b) * b;
}

unsigned long multiple_lcm(unsigned long n){
    unsigned long mlcm=1;
    for(int i=2;i<=n;i++) mlcm = lcm(mlcm, i);
    return mlcm;
}

int main(){
    unsigned long t, n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << multiple_lcm(n) << endl;
    }
    return 0;
}
