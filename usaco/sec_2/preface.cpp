/*
ID: 
LANG: C++
PROG: preface 
*/
//#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

ifstream cin("preface.in");
ofstream cout("preface.out");

#define MAX 10000
#define NLT 13
#define NUMERALS 7

string numl[NLT] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
int numn[NLT]    = { 1000, 900, 500, 400, 100,   90,   50,  40,   10,   9,   5,    4,   1  };
char lits [NUMERALS] = { 'M', 'D', 'C', 'L', 'X', 'V', 'I' };
int ncount[NUMERALS] = {  0,   0,   0,   0,   0,   0,   0  };

void count_numerals(string s){
    for(int i=0;i<s.length();i++){
        for(int j=0;j<NUMERALS;j++){
            if(lits[j]==s[i]){
                ncount[j]++;break;
            }
        }
    }
}

void roman(int n){
    int i=0;
    while(i<NLT){
        while(n>=numn[i]){
            n-=numn[i];
            count_numerals(numl[i]);
        }
        i++;
    }
}

int main(){
    int n;cin>>n;
    for(int i=1;i<=n;i++)roman(i);
    for(int i=NUMERALS-1;i>-1;i--)
        if(ncount[i])cout << lits[i] << " " << ncount[i] << endl;
    return 0;
}
