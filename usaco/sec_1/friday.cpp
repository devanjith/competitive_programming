/*
ID: 
LANG: C++
PROG: friday 
*/

#include<fstream>
#include<algorithm>
#include<string>
#include<math.h>
#include<iostream>

using namespace std;

const int BEGIN=1900;

bool leap(int year){
    return year%100 ? year%4 ? false : true : year%400 ? false : true;
}

int countdays(int day, int more){
    for(int i=0;i<more;i++){
        day++;
        if(day>=7)day=0;
    }
    return day;
}

int main(){
    ifstream fin("friday.in");
    ofstream fout("friday.out");
    
    int n,year,day;
    fin>>n;
    year = BEGIN;//1900
    day=0; //Saturday
    
    int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days[] = {0, 0, 0, 0, 0, 0, 0};
    
    while(n--){
        months[1] = leap(year++) ? 29 : 28;
        for(int i=0;i<12;i++){
            days[day]++;
            day = countdays(day,months[i]);
        }
    }
    
    for(int i=0;i<6;i++)
        fout<<days[i]<<" ";
    fout<<days[6]<<endl;

    return 0;
}
