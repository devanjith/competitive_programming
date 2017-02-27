/*
ID: 
LANG: C++
PROG: barn1 
*/

#include<fstream>
#include<algorithm>
#include<string>
#include<math.h>

using namespace std;

int main(){
    ifstream fin("barn1.in"); /*input file*/
    ofstream fout("barn1.out"); /*output file*/

    int M, S, C;
    fin>>M>>S>>C;

    int stalls[C];
    for(int i=0;i<C;i++)fin>>stalls[i];
    sort(stalls, stalls+C);

    int gaps[C];
    int j=0;
    for(int i=1;i<C;i++){
        if( stalls[i] - stalls[i-1] > 1){
            gaps[j++] = stalls[i] - stalls[i-1] - 1;
        }
    }
    sort(gaps, gaps+j);

    //for(int i=0;i<C;i++)fout<<stalls[i]<<" "; fout<<endl;
    //for(int i=0;i<j;i++)fout<<gaps[i]<<" ";fout<<endl;

    int boards = j+1, i=0, sum=C;
    while(boards >  M){
        //fout<<sum<<endl;
        sum += gaps[i++];
        boards--;
    }

    fout << sum << endl;
    return 0;
}
