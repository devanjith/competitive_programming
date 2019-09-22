#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define MAX 100001

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, k, q, m, ar[MAX];
    cin >> n >> k >> q;
    k %= n;
    for (int i=0;i<n;i++) cin >> ar[i];
    for (int i=0;i<q;i++) {
        cin >> m;
        cout << ar[(n-k+m)%n] << endl;
    }
    return 0;
}

