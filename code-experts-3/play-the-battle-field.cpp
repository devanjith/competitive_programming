#include <iostream>
using namespace std;

#define MAX 1000

void bomb(int ar[MAX][MAX], int x, int y){
    if(!ar[x][y])return;
    ar[x][y]=0;
    bomb(ar, x, y+1);
    bomb(ar, x, y-1);
    bomb(ar, x+1, y);
    bomb(ar, x-1, y);
    bomb(ar, x-1, y+1);
    bomb(ar, x+1, y+1);
    bomb(ar, x+1, y-1);
    bomb(ar, x-1, y-1);
}

bool fubar(int ar[MAX][MAX]){
    for(int i=0;i<MAX;i++)
        for(int j=0;j<MAX;j++)
            if(ar[i][j])return false;
    return true;
}

int main(){
    int r, c, n, x, y, ar[MAX][MAX];
    for(int i=0;i<MAX;i++)for(int j=0;j<MAX;j++)ar[i][j]=0;
    cin>>r>>c>>n;
    for(int i=0;i<r;i++)for(int j=0;j<c;j++)cin>>ar[i][j];
    while(n--){
        cin>>x>>y;
        bomb(ar, x, y);
    }
    if(fubar(ar))cout<<"Anuradha"<<endl;
    else cout<<"Dulaj"<<endl;
    return 0;
}
