#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, x, y, z, dx, dy;
    cin >> n;
    while (n--) {
        cin >> x >> y >> z;
        dx = abs(x-z);
        dy = abs(y-z);
        if (dx < dy) cout << "Cat A" << endl;
        else if (dx > dy) cout << "Cat B" << endl;
        else cout << "Mouse C" << endl;
    }
    return 0;
}

