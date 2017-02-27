/*
ID: 
LANG: C++
PROG: skidesign 
*/

#include<fstream>
#include<algorithm>
#include<math.h>
using namespace std;

#define LIM 17
#define ARS 1000
#define MXC 10000000

int main(){
    ifstream fin("skidesign.in"); /*input file*/
    ofstream fout("skidesign.out"); /*output file*/

    int n, ar[ARS], high, low;
    long cost=MXC, tmpcost=0;
    fin>>n;
    for(int i=0;i<n;i++)fin>>ar[i];
    sort(ar, ar+n);
    low = 1;
    high = LIM+low;
    int i;
    while( high <= ar[n-1]){
        tmpcost = i = 0;
        while(i < n){
            if(low - ar[i] > 0) tmpcost += pow(low-ar[i], 2);
            else if(ar[i] - low > LIM) tmpcost += pow(ar[i]-high, 2);
            else if(high - ar[i] > LIM) tmpcost += pow(high - ar[i], 2);
            i++;
        }
        cost = min(cost , tmpcost);
        high++;low++;
    }

    fout << cost << endl;

    return 0;
}
