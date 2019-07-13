#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    unsigned long long n;
    cin >> n;
    while (n!=1) {
        cout << n << " ";
        n = n%2==0 ? n/2 : n*3+1;
    }
    cout << "1" << endl;
    return 0;
}

