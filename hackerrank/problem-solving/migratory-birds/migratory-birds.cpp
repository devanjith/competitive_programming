#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, k, max=0, maxi=0, c[6] = {0, 0, 0, 0, 0, 0};
    cin >> n;
    for (int i=1;i<=n;i++) {
        cin >> k;
        ++c[k];
    }
    for (int i=1;i<=5;i++) {
        if (c[i] > max) {
            max = c[i];
            maxi = i;
        }
    }

    cout << maxi << endl;
    return 0;
}

