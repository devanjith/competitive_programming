#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define MAX 100000

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, d, ar[MAX];

    cin >> n >> d;
    for (int i=0;i<n;i++) cin >> ar[i];

    for (int i=d;i<n;i++) cout << ar[i] << " ";
    for (int i=0;i<d;i++) cout << ar[i] << " ";

    return 0;
}

