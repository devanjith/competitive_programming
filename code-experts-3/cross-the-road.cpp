#include <iostream>
using namespace std;

int main(){
    string l1, l2;
    int pos;
    cin >> l1 >> l2 >> pos;
    if(l2[pos+1]!='V' && l1[pos-2]!='V')cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
