/*
ID: 
LANG: C++
PROG: milk
*/

#include<fstream>
#include<algorithm>
#include<string>
#include<math.h>

const int MAX = 100000;

using namespace std;

int main(){
    ifstream fin("milk.in"); /*input file*/
    ofstream fout("milk.out"); /*output file*/

    int n,m, cost=0, min_price, min_price_idx;
    fin>>n>>m;
    int price[m], amount[m];
    for(int i=0;i<m;i++)
        fin>>price[i]>>amount[i];

    while(n>0){
        min_price = MAX;
        for(int i=0;i<m;i++){
            if( min_price > price[i]){
                min_price = price[i];
                min_price_idx = i;
            }
        }

        //fout<<min_price<<" "<<min_price_idx<<endl;


        if(amount[min_price_idx] <= n){
            n -= amount[min_price_idx];
            cost += price[min_price_idx]*amount[min_price_idx];
            price[min_price_idx] = MAX;
        }else{
           cost += n* price[min_price_idx];
           n=0;
        }
    }

    fout<<cost<<endl;

    return 0;
}
