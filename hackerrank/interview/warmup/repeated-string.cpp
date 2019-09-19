#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    long long n, l, a=0;

    string s;
    cin >> s >> n;
    
    l = s.length();

    for (long long i=0;i<l;i++)
        if (s[i] == 'a') a++;

    a *= n/l;

    for (long long i=0;i<n%l;i++)
        if (s[i] == 'a') a++;

    cout << a << endl;

    return 0;
}

