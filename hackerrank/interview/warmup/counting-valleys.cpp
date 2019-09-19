#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, v=0, altitude=0;
    string s;
    
    cin >> n >> s;

    for (int i=0;i<n;i++) {
        if (s[i] == 'U') altitude++;
        else altitude--;
        if (altitude == 0 && s[i] == 'U') v++;
    }

    cout << v << endl;
    return 0;
}

