#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, k, prev;
    unsigned long long turns = 0;
    cin >> n >> prev;
    for (int i=1;i<n;i++) {
        cin >> k;
        if (k < prev) turns += prev-k;
        else prev = k;
    }
    cout << turns << endl;
    return 0;
}

