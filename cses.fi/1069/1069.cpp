#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int len, max, cur, chr;
    string s;
    getline(cin, s);
    len = s.length();

    chr = s[0];
    cur = 1;
    max = 1;

    for (int i=1;i<len;i++) {
        if (chr == s[i]) {
            cur++;
            max = cur > max ? cur : max;
        }
        else cur=1;
        chr = s[i];
    }
    
    cout << max << endl;

    return 0;
}

