#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int heights[26], h, hmax = 0;
    string word;

    for (int i=0;i<26;i++) cin >> heights[i];
    cin >> word;
    for (int i=0;i<word.length();i++) {
        h = heights[word[i]-97];
        hmax = h > hmax ? h : hmax;
    }

    cout << hmax * word.length() << endl;

    return 0;
}

