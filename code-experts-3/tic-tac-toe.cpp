#include <iostream>
using namespace std;

#define MAX 3

bool check(int ar[MAX][MAX]){
    if(ar[0][0]==1 && ar[1][1]==1 && ar[2][2]==1)return true;
    if(ar[0][2]==1 && ar[1][1]==1 && ar[2][0]==1)return true;
    if(ar[0][0]==1 && ar[0][1]==1 && ar[0][2]==1)return true;
    if(ar[1][0]==1 && ar[1][1]==1 && ar[1][2]==1)return true;
    if(ar[2][0]==1 && ar[2][1]==1 && ar[2][2]==1)return true;
    if(ar[0][0]==1 && ar[1][0]==1 && ar[2][0]==1)return true;
    if(ar[0][1]==1 && ar[1][1]==1 && ar[2][1]==1)return true;
    if(ar[0][2]==1 && ar[1][2]==1 && ar[2][2]==1)return true;
    return false;
}

int main(){
    int ar[MAX][MAX];
    for(int i=0;i<MAX;i++)for(int j=0;j<MAX;j++)cin>>ar[i][j];
    for(int i=0;i<MAX;i++){
        for(int j=0;j<MAX;j++){
            if(ar[i][j]==8){
                ar[i][j]=1;
                if(check(ar)){
                    cout<<i<<","<<j<<endl;
                    return 0;
                }
                ar[i][j]=8;
            }
        }
    }
    cout<<"NO"<<endl;
}
