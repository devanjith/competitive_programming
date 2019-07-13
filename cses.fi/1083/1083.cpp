#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    unsigned long long n, k, sum = 0;
    cin >> n;
    sum = (n*(n+1)) >> 1;
    while (--n) {
        cin >> k;
        sum -= k;
    }
    cout << sum << endl;
    return 0;
}

