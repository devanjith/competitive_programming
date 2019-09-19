#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define MAX 1000

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, d, m, s, c=0, ar[MAX];
    cin >> n;
    for (int i=0;i<n;i++) cin >> ar[i];
    cin >> d >> m;

    for (int i=0;i<n;i++) {
        s = 0;
        for (int j=i;j<i+m;j++) {
            s += ar[j];
        }
        if (s == d) c++;
    }
    cout << c << endl;
    return 0;
}
