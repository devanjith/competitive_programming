#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, prev = 2, sum = prev;
    cin >> n;
    for (int i=0;i<n-1;i++) {
        prev = prev * 3 / 2;
        sum += prev;
    }
    cout << sum << endl;
    return 0;
}

