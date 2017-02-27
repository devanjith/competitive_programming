/*
ID: 
LANG: C++
PROG: sprime 
*/
#include<fstream>
#include<math.h>
#include<vector>
using namespace std;

#define MAX 10000000
int si, ei, N;
vector<int> sp;
ifstream fin("sprime.in");
ofstream fout("sprime.out");

bool is_prime(int n){
    if(n<2 || n%2==0)return false;
    for(int i=3;i*i<=n;i+=2)if(n%i==0)return false;
    return true;
}

void gen_sprimes(){
    int n;
    sp.push_back(2);
    sp.push_back(3);
    sp.push_back(5);
    sp.push_back(7);
    si=0;
    ei=sp.size();
    while(sp[ei-1] <= MAX){
        for(int i=si; i<ei; i++){
            for(int j=1; j<10; j+=2){
                n = sp[i]*10 + j;
                if(is_prime(n))sp.push_back(n);
            }
        }
        si = ei;
        ei = sp.size();
    }
}

int main(){
    gen_sprimes();
    //for(int i=0;i<sp.size();i++)fout<<sp[i]<<endl;
    fin >> N;
    N = pow(10, N-1);
    for(int i=0;i<sp.size();i++){
        if(sp[i]>=N && sp[i]<=N*10)fout << sp[i] << endl;
    }
    return 0;
}
