#include<iostream>
#include<cmath>
using namespace std;

int sad_set[] = { 4, 16, 20, 37, 42, 58, 89, 145};

int sum_sq(int n){
    int sum=0;
    while(n!=0){
        //cout<<n<<"\t";
        sum+=(n%10)*(n%10);
        n/=10;
    }
    return sum;
}

bool not_sad(int n){
    for(int i=0;i<8;i++){
        if(n==sad_set[i])return false;
    }
    return true;
}

bool tail(int n,int k){
    int tl=1;
    while(not_sad(sum_sq(n))){
        n=sum_sq(n);
        //cout<<n<<"\t";
        tl++;
        if(n==1)return false;
    }
    if(tl==k)return true;
    return false;
}

int main(){
    int a,b,k,cnt=0;
    cin>>a>>b>>k;
    for(int i=a;i<b;i++){
        if(tail(i,k))cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
