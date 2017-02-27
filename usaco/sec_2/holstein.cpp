/*
ID:  
PROG: holstein
LANG: C++
*/

#include <fstream>
#include <bitset>
using namespace std;

ifstream fin("holstein.in");
ofstream fout("holstein.out");

int V,vit[26],G,feed[16][26],vc;
bitset<16> minbit(0);
int main(){
    vc = 17;
    fin>>V;
    int in;
    for(int i=0;i!=V;i++)
        fin >> vit[i];
    fin>>G;
    for(int i=0;i!=G;i++)
    for(int j=0;j!=V;j++)
        fin >>feed[i][j];
    for(int i=0;i<(1<<G);i++){
        int v[26]={0};
        bitset<16> bit(i);
        for(int b=0;b!=G;b++) if(bit[b])
        for(int j=0;j!=V;j++)
        v[j]+= feed[b][j];      
        bool ok =  true;
        for(int j=0;j!=V;j++) if(v[j] < vit[j]){
            ok = false;
            break;
        }
        if(ok && int(bit.count()) < vc && bit.to_ulong() > minbit.to_ulong()){
            vc = bit.count();
            minbit=bit;
        }   
    }
    fout << vc;
    for(int i=0;i!=G;i++) if(minbit[i])
        fout << " " <<i+1 ;
    fout << endl;
    return 0;
}
