#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define MAX 1000

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, c=0;
    int ar[MAX];

    cin >> n;
    for (int i=0;i<n;i++) cin >> ar[i];
    for (int i=0;i<n;i++) {
        if (!ar[i]) continue;
        for (int j=i+1;j<n;j++) {
            if (ar[i] == ar[j]) {
                c++;
                ar[j] = 0;
                break;
            }
        }
    }

    cout << c << endl;
    return 0;
}

