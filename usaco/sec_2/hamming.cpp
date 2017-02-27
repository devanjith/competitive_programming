/*
ID:  
PROG: hamming
LANG: C++
*/
#include <fstream>
#include <bitset>
#include <vector>
using namespace std;

ifstream fin("hamming.in");
ofstream fout("hamming.out");
 
vector< int > ans;
 
int dif(int a,int b){
    bitset<8> bit(a^b);
    return bit.count();
}
 
int main(){
    int n,b,d;
    fin >> n >> b >>d;
    ans.push_back(0);
    for(int i=0;i!=1<<b;i++){
        bool ok= true;
        for(int j=0;j!=ans.size();j++)
        if( dif(i,ans[j]) < d ){
            ok = false;
            break;
        }
        if(ok) ans.push_back(i);
        if(ans.size()==n) break;            
    }
    for(int i=0;i!=ans.size();i++){
        if(i && (i%10==0) )fout << endl;
        else if(i) fout << " ";
        fout << ans[i];
    }
    fout << endl;
    return 0;
}
