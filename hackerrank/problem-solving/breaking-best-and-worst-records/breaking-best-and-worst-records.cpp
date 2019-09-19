#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define MAX 1000
#define INF (1<<30)

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, min=INF, max=-1, nmin=0, nmax=0, k;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> k;
        if (k > max) { max = k; ++nmax;}
        if (k < min) { min = k; ++nmin;}
    }

    cout << --nmax << " " << --nmin << endl;
    return 0;
}

