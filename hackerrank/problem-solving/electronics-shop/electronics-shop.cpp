#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define MAX 1001

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, m, na[MAX], ma[MAX], b, spend=-1;
    cin >> b >> n >> m;
    for (int i=0;i<n;i++) cin >> na[i];
    for (int i=0;i<m;i++) cin >> ma[i];
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if (na[i] + ma[j] <= b) spend = max(spend, na[i] + ma[j]);
        }
    }
    cout << spend << endl;
    return 0;
}


