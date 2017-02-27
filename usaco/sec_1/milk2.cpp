/*
ID: 
LANG: C++
PROG: milk2
*/

#include<fstream>
#include<algorithm>
#include<string>
#include<math.h>

using namespace std;

int main(){
    ifstream fin("milk2.in"); /* input file */
    ofstream fout("milk2.out"); /* output file */
    
    int n, max_yes=0, max_no=0, cur_yes, cur_no, max_out=0, max_out_in=0;
    fin>>n;

    int in[n], out[n];

    for(int i=0;i<n;i++){
        fin>>in[i]>>out[i];
        if(out[i]-in[i] > max_yes)max_yes=out[i]-in[i];
        if(out[i]>max_out){
            max_out=out[i];
            max_out_in=in[i];
        }
    }

    sort(in, in+n);
    sort(out, out+n);

    for(int i=0;i<n;i++)
        fout<<in[i]<<" "<<out[i]<<endl;
    fout<<endl;


    for(int i=0;i<n-1;i++){
        cur_yes=0;
        cur_no=0;
        for(int j=i;j<n-1;j++){
            cur_yes+= out[j]-in[j];
            if(in[j+1] > out[j] && (max_out_in > out[j])){
                cur_no+= in[j+1]- out[j];
                break;
            }
            if(in[j+1] < out[j])break;
        }
        if(max_yes < cur_yes)max_yes=cur_yes;
        if(max_no  < cur_no )max_no = cur_no;
    }

    fout<<max_yes<<" "<<max_no<<endl;

    return 0;
}
