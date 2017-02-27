/*
ID: 
LANG: C++
PROG: crypt1 
*/

#include<fstream>
#include<algorithm>
#include<string>
#include<math.h>

using namespace std;

int len(int n){
    int digits=0;
    while(n){
        n/=10;
        digits++;
    }
    return digits;
}

bool find(int k, int ar[], int n){
    for(int i=0; i< n; i++)
        if(k==ar[i])return true;
    return false;
}

bool valid(int k, int ar[], int n){
    int digit;
    while(k){
        digit = k%10;
        k/=10;
        if(!find(digit, ar, n))return false;
    }
    return true;
}

int main(){
    ifstream fin("crypt1.in"); /*input file*/
    ofstream fout("crypt1.out"); /*output file*/

    int n, count=0;
    fin>>n;
    int ar[n];
    for(int i=0;i<n;i++)fin>>ar[i];
   
    for(int i=100; i< 1000; i++){
        for(int j=10; j< 100; j++){
            if( valid(i, ar, n) &&
                valid(j, ar, n) &&
                valid(i*j, ar, n) &&
                valid(i*(j%10), ar, n) &&
                valid(i*(j/10), ar, n) &&
                len(i*(j%10)) == 3 &&
                len(i*(j/10)) == 3 &&
                len(i*j) == 4)
                count++;
                //fout<<i*j<<endl;
        }
    }

    fout<<count<<endl;

    return 0;
}
