#include <iostream>
#include <algorithm>
using namespace std;

struct interval{
    int begin;
    int end;
};

bool diff(interval a, interval b){
    return a.end < b.end;
}

int main(){
    ios_base::sync_with_stdio(false);
    int t,n, begin, end, cur, c;
    cin >> t;
    while(t--){
        c=0;
        cin >> n;
        interval ar[n];
        for(int i=0;i<n;i++){
            cin >> begin >> end;
            interval it;
            it.begin = begin; it.end = end;
            ar[i] = it;
        }
        sort(ar, ar+n, diff);
        cur = 0;
        for(int i=0;i<n;i++){
            if(ar[i].begin >= cur){
                cur = ar[i].end;
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}
