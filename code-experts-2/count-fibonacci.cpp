#include<iostream>
using namespace std;
const int ar_siz=45;
int ar[ar_siz];
void gen(){
    unsigned int a=0,b=1,c,i=0;
    while(a<1000000000){
        c=a;
        a=b;
        b+=c;
        ar[i++]=a;
    }
}
int get_count(int a,int b){
    unsigned int cnt=0;
    for(int i=0;i<ar_siz;i++){
        if(ar[i]>=a && ar[i] <= b){
            cnt++;
        }
    }
    if(a<2)cnt--;
    return cnt;
}
int main(){
    gen();
    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        cout<<get_count(a,b)<<endl;
    }
    return 0;
}
