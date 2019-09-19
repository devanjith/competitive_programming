#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define MAX 100001

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    long long n, k, bill[MAX], b, sum = 0;
    cin >> n >> k;
    for (int i=0;i<n;i++) {
        cin >> bill[i];
        sum += bill[i];
    }
    sum -= bill[k];
    cin >> b;
    if (b == sum/2) cout << "Bon Appetit" << endl;
    else cout << (b - sum/2) << endl;
    return 0;
}

