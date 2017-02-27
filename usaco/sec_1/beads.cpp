/*
ID: 
LANG: C++
PROG: beads 
*/

#include<fstream>
#include<algorithm>
#include<string>
#include<math.h>

using namespace std;

char get_c(string s, int l, int i){
    if(s[i]!='w')return s[i];
    return s[++i]=='w' ? get_c(s,l,i) : s[i]; 
}

int main(){
    ifstream fin("beads.in");
    ofstream fout("beads.out");
    
    int l, cur, mx=0, col;
    char c, w='w';
    string s,bs;

    fin>>l>>s;
    bs=s;

    for(int i=0;i<l;i++){
        cur=0;col=0;
        s=bs;
        c= get_c(s,l,i);
        for(int j=i;j<l;j++){
            //fout<<s[j];
            if(s[j]==c)cur++;
            else if(s[j]==w){
                s[j]=c;
                cur++;
            }else{
                col++;
                c=s[j];
                if(col>1)break;
                cur++;
            }
            if(j==l-1)j=-1;
            if(cur==l)break;
        }//fout<<" "<<cur<<endl;
        if(cur > mx)mx=cur;
    }
    fout<<mx<<endl;

    return 0;
}
