#include <iostream>
using namespace std;

int nimsum(int ar[], int n){
    int nsum = ar[0];
    for(int i=1;i<n;i++)nsum ^= ar[i];
    return nsum;
}

int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int ar[n];
        for(int i=0;i<n;i++)cin >> ar[i];
        cout << ( nimsum(ar, n) ? "WIN" : "LOSE" ) << endl;
    }
    return 0;
}
