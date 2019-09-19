#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define MAX 1000

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, k, c=0, ar[MAX];
    cin >> n >> k;
    for (int i=0;i<n;i++) cin >> ar[i];
    for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            if ((ar[i]+ar[j])%k ==0) c++;
        }
    }
    cout << c << endl;
    return 0;
}
