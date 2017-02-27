/*
ID: 
LANG: C++
PROG: ariprog
*/

#include<fstream>
using namespace std;

bool arr[125002]={false};
int M,N;

int main(){
    ifstream fin("ariprog.in");
    ofstream fout("ariprog.out");
    fin >> N >> M;
    for (int i=0;i<=M;i++)
        for(int j=i;j<=M;j++)
            arr[(i*i+j*j)]=true;

    bool has_ans = false;
    for(int d=1;d<=M*M*2/(N-1);d++){
        for(int a=0;a<=((M*M));a++){
            bool found=true;
            for(int n=0;n<N;n++){
                if(!arr[a+n*d]){
                    found=false;
                    break;
                }
            }
            if(found){
                fout<<a<<" "<<d<<endl;
                has_ans = true;
            }
        }
    }
    if (!has_ans)
        fout << "NONE"<<endl;
    return 0;
}
