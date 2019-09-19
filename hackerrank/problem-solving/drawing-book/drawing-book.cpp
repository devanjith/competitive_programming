#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, p, a, b;
    cin >> n >> p;
    cout << min(p/2, n/2 - p/2) << endl;
    return 0;
}

