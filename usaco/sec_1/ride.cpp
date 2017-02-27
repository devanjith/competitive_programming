/*
ID: 
PROG: ride
LANG: C++
*/
#include<fstream>
#include<string>
using namespace std;

int main(){
    ifstream fin("ride.in");
    ofstream fout("ride.out");
    string C,U;
    fin>>C>>U;
    int m1=1,m2=1;
    for(int i=0;i<C.length();i++)m1*= C[i]-65+1;
    for(int i=0;i<U.length();i++)m2*= U[i]-65+1;
    if(m2%47 == m1%47)fout<<"GO"<<endl;
    else fout<<"STAY"<<endl;
    fin.close();
    fout.close();
    return 0;
}
