/*
 * euler001.cpp - multiples of 3 and 5
 * */
#include<iostream>
using namespace std;

unsigned long sum(unsigned long n,unsigned long k){
    return k * (n/k) * (n/k+1) / 2 ;
} 

int main(){
    unsigned long t, n;
    cin >> t;
    while (t--){
        cin >> n;
        cout << sum(--n, 3)+sum(n, 5)-sum(n, 15) << endl;
    }
    return 0;
}
