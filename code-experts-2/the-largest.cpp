#include<cstdio>
#include<cmath>
using namespace std;

bool isPrime(int num);

int main(){
    int t=0,num=0,fact=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&num);
        if(isPrime(num)){
            printf("Largest prime factor of %d is %d\n",num,num);
            continue;
        }
        for(int i=num/2;i>1;i--){
            if(num%i==0){
                if(isPrime(i)){
                    fact = i;
                    break;
                }
            }
        }
        printf("Largest prime factor of %d is %d\n",num,fact);
    }
}


bool isPrime(int num){
    for(int i=2;i<num/2+1;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
