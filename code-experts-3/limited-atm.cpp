#include <iostream>
using namespace std;

#define MAX 100000
#define MPC 20000
#define NN 7

void count(int n){
    int notes[] = { 5000, 2000, 1000, 500, 100, 50, 10 };
    int ar[NN];
    for(int i=0;i<NN;i++)ar[i]=0;
    
    while(n){
        for(int i=0;i<NN;i++){
            if(n>=notes[i]){
                ar[i]++;
                n-=notes[i];
            }
        }
    }
    for(int i=0;i<7;i++){
        if(ar[i])cout<<notes[i]<<" "<<ar[i]<<",";
    }
    cout<<endl;
}

int main(){
    int n, taken=0;
    while(cin>>n){
        taken+=n;
        if(n%10 || n > MPC || taken > MAX){
            cout<<"please enter correct"<<endl;
        }else{
            count(n);
        }
    }
    return 0;
}
