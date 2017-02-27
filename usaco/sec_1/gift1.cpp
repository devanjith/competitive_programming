/*
ID: 
LANG: C++
PROG: gift1 
*/

#include<fstream>
#include<algorithm>
#include<string>
#include<math.h>
using namespace std;

struct people{
    string name;
    int give;
    int get;
};

int find(people ar[], int n, string s){
    for(int i=0;i<n;i++)
        if(ar[i].name == s)return i;
    return -1;
}

int main(){
    ifstream fin("gift1.in");
    ofstream fout("gift1.out");

    int n, amount, div, each, giverid;
    string s, giver, getter;

    fin>>n;
    people ar[n];
    for(int i=0;i<n;i++){
        fin>>ar[i].name;
        ar[i].give=0;
        ar[i].get=0;
    }

    for(int i=0;i<n;i++){  
        fin>>giver>>amount>>div;
        giverid = find(ar, n, giver);
        if(amount == 0)continue;
        else if(div==0){
            ar[giverid].get += amount;    
        }
        ar[giverid].give += amount;
        ar[giverid].get += amount%div;
        each = amount/div;
        for(int i=0;i<div;i++){
            fin>>getter;
            ar[find(ar, n, getter)].get += each;
        }
    }
    
    for(int i=0;i<n;i++)
        fout<<ar[i].name<<" "<<ar[i].get - ar[i].give<<endl;
    return 0;
}
