#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define MAX 101

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, x, lmax = 0, count[MAX];
    memset(count, 0, sizeof(count));

    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> x;
        ++count[x];
    }

    for (int i=1;i<MAX-1;i++) 
        if (count[i]+count[i+1] > lmax) lmax = count[i] + count[i+1];

    cout << lmax << endl;
    return 0;
}

