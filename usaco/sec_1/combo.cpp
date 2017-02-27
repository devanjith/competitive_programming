/*
ID: 
LANG: C++
PROG: combo 
*/

#include<fstream>
#include<algorithm>
#include<string>
#include<math.h>
using namespace std;

short valid(int cur[], int john[], int master[], int n){
    if( (abs(cur[0] - john[0]) < 3 || abs(cur[0] - john[0]) > n-3) &&
        (abs(cur[1] - john[1]) < 3 || abs(cur[1] - john[1]) > n-3) &&
        (abs(cur[2] - john[2]) < 3 || abs(cur[2] - john[2]) > n-3) )return 1;
    if( (abs(cur[0] - master[0]) < 3 || abs(cur[0] - master[0]) > n-3) &&
        (abs(cur[1] - master[1]) < 3 || abs(cur[1] - master[1]) > n-3) &&
        (abs(cur[2] - master[2]) < 3 || abs(cur[2] - master[2]) > n-3) )return 1;
    return 0;
}

int main(){
    ifstream fin("combo.in"); /*input file*/
    ofstream fout("combo.out"); /*output file*/
    
    int n, count=0;
    int john[3], master[3], cur[3];

    fin>>n;
    for(int i=0;i<3;i++)fin>>john[i];
    for(int i=0;i<3;i++)fin>>master[i];

    for(int i=1; i<n+1; i++){
        for(int j=1; j<n+1; j++){
            for(int k=1; k<n+1; k++){
                //fout<<i<<j<<k<<endl;
                cur[0]=i; cur[1]=j; cur[2]=k;
                count += valid(cur, john, master, n);
            }
        }
    }

    fout<<count<<endl;
    return 0;
}
