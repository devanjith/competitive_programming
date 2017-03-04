#include <iostream>
using namespace std;

int main(){
    int t,n,k,c;
    cin >> t;
    while(t--){
        c=0;
        cin >> n >> k;
        int ar[n];
        for(int i=0;i<n;i++)cin >> ar[i];
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++)
                if(abs(ar[i]-ar[j]) <= k)c++;
        }
        cout << c << endl;
    }
    return 0;
}
