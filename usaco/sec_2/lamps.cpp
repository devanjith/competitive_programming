/*
ID: 
LANG: C++
TASK: lamps
*/
#include <fstream>
#include <stdbool.h>

using namespace std;

ifstream fin("lamps.in");
ofstream fout("lamps.out");

int C,N;

void b1(bool state[]){for (int i=0;i<N;i++) state[i]=1-state[i];}
void b2(bool state[]){for (int i=0;i<N;i+=2) state[i]=1-state[i];}
void b3(bool state[]){for (int i=1;i<N;i+=2) state[i]=1-state[i];}
void b4(bool state[]){for (int i=0;i<N;i+=3) state[i]=1-state[i];}

void swap(bool a[],bool b[]){
     int temp;
     for (int i=0;i<N;i++){
         temp=a[i];
         a[i]=b[i];
         b[i]=temp;
    }
}

int cmp(bool a[],bool b[]){
    int i;
    for (i=0;a[i]<=b[i] && i<N;i++)
        if (a[i]<b[i]) return 0;
    if (i==N) return 0; else return 1;
}

int main(){
    int i,j,k,a,b,c,d,flag,count=0,onlist[110],offlist[110];
    bool tempstate[110],resultstore[100][110];
    fin >> N >> C;
    for(i=0;;i++){fin >> onlist[i];if(onlist[i]==-1)break;}
    for(i=0;;i++){fin >> offlist[i];if(offlist[i]==-1)break;}
    for (a=0;a<=1;a++)
        for (b=0;b<=1;b++)
            for (c=0;c<=1;c++)
                for (d=0;d<=1;d++){
                    for (i=0;i<N;i++) tempstate[i]=1;
                    for (i=0;i<a;i++) b1(tempstate);
                    for (i=0;i<b;i++) b2(tempstate);
                    for (i=0;i<c;i++) b3(tempstate);
                    for (i=0;i<d;i++) b4(tempstate);
                    //check
                    flag=0;
                    if (a+b+c+d>C || (C-a+b+c+d)%2==1) flag=1;
                    for (i=0;onlist[i]!=-1;i++) if (tempstate[onlist[i]-1]==0) flag=1;
                    for (i=0;offlist[i]!=-1;i++) if (tempstate[offlist[i]-1]==1) flag=1;
                    if (flag==0){
                                 for (i=0;i<N;i++) resultstore[count][i]=tempstate[i];
                                 count++;
                                 }
                    }
    if (count==0) fout << "IMPOSSIBLE" << endl;
    else {
         for (i=0;i<count-1;i++)
             for (j=i+1;j<count;j++)
                 if (cmp(resultstore[i],resultstore[j]))
                      swap(resultstore[i],resultstore[j]);
         for (i=0;i<count;i++){
             for (j=0;j<N;j++)
                 fout << resultstore[i][j];
             fout << endl;
             }
         }
    return 0;
}
