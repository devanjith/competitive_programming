/*
ID: 
PROG: dualpal
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <sstream>
using namespace std;
 
string convertInt(int num){
   stringstream ss;
   ss << num;
   return ss.str();
}
 
string from_10(int num, int base){ //converts FROM base 10 to specified base
    vector<string> con_digs;
 
    int size = 0;
    while(num / base != 0){
        con_digs.push_back(convertInt(num % base));
        size++;
 
        num = num / base;
    }
 
    con_digs.push_back(convertInt(num));
    size++;
 
    string con_num = "";
 
    for(int i = size - 1; i > -1; i--){
        con_num += con_digs[i];
    }
 
    return con_num;
}
 
string reverse(string s){
    string result;
    for(int i = s.length() - 1; i >= 0; i--){
        result += s[i];
    }
    return result;
}
 
int main(){
    ifstream in("dualpal.in");
    ofstream out("dualpal.out");
 
    int N, S;
    in >> N >> S;
 
    int n = 0;
    int s = S + 1; //starting number: S + 1
    while(n < N){ //while # of numbers outputted is less than or equal to the needed 
        int base_num = 0; //number of bases the current number is a palindrome in
        for(int i = 2; i < 10; i++){ //check bases 2 through 10
            string new_base = from_10(s, i);
            if(new_base == reverse(new_base)){ //if palindrome, add one to base_num
                base_num++;
            }
        }
        if(convertInt(s) == reverse(convertInt(s))){
            base_num++;
        }
        if(base_num >= 2){ //if it is a palindrom in more than one bases
            out << s << endl; //output the number
            n++; // add to the tally
        }
        s++; //next number
    }
}
