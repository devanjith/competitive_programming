/*
ID: 
LANG: C++
PROG: pprime 
*/

#include<fstream>
using namespace std;

int a, b, l, k;

int modify(int n){
    int m = n; n/=10;
    while(n){
        m = m*10 + n%10;
        n/=10;
    }
    return m;
}

bool is_prime(int n){
    if(n<2 || n%2==0 && n!=2)return false;
    for(int i=3;i*i<=n;i+=2)
        if(n%i==0)return false;
    return true;
}

int main(){
    ifstream fin("pprime.in"); /*input file*/
    ofstream fout("pprime.out"); /*output file*/
    fin >> a >> b;
    if(a==5)fout<<5<<endl;
    if(a<=7&&7<=b)fout<<7<<endl;
    if(a<=11&&11<=b)fout<<11<<endl;
    k = 10;
    while(modify(k) < a)k++;
    l = modify(k);
    while(l <= b){
        if(is_prime(l))fout<<l<<endl;
        l = modify(++k);
    }
    return 0;
}
