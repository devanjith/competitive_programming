#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define MAX 1000

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, steps=0, ar[MAX];

    cin >> n;
    for (int i=0;i<n;i++) cin >> ar[i];

    int i=0;
    while (i < n-1) {
        if (!ar[i+2]) i+=2;
        else i++;
        steps++;
    }

    cout << steps << endl;

    return 0;
}

