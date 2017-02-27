/*
ID: 
LANG: C++
PROG: numtri 
*/
#include<fstream>
using namespace std;
#define MAX 1000
int ar[MAX][MAX], n;
int main(){
    ifstream fin("numtri.in"); /*input file*/
    ofstream fout("numtri.out"); /*output file*/
    for(int i=0;i<MAX;i++)for(int j=0;j<MAX;j++)ar[i][j]=0;
    fin>>n;
    for(int i=0;i<n;i++)for(int j=0;j<=i;j++)fin>>ar[i][j];
    for(int i=n-2;i>=0;i--)for(int j=0;j<=i;j++)ar[i][j] += max(ar[i+1][j], ar[i+1][j+1]);
    fout << ar[0][0] << endl;
    return 0;
}
