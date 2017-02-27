/*
PROG: transform
LANG: C++
*/
#include <iostream>
#include <fstream>
using namespace std;

char s[10][10];
char t[10][10];
char cur[10][10];
int N;

bool same(char s[10][10], char t[10][10]) {
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++)
			if(s[i][j] != t[i][j])	return false;
	}
	return true;
}

bool rot1(char s[10][10], char t[10][10]) {
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) {
			if(s[i][j] != t[j][N-1-i])	return false;
		}
	}
	return true;
}

bool rot2(char s[10][10], char t[10][10]) {
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) {
			if(s[i][j] != t[N-1-i][N-1-j])	return false;
		}
	}
	return true;
}

bool rot3(char s[10][10], char t[10][10]) {
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++)  {
			if(s[i][j] != t[N-1-j][i])	return false;
		}
	}
	return true;
}

bool reflect(char s[10][10], char t[10][10]) {
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) {
			if(s[i][j] != t[i][N-1-j])	return false;
		}
	}
	return true;
}

bool combine(char s[10][10], char t[10][10]) {
	char tt[10][10];
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) {
			tt[i][j] = t[i][N-1-j];	
		}
	}

	return rot1(s, tt) || rot2(s, tt) || rot3(s, tt);
}


int main() {
	ifstream fin("transform.in");	
	ofstream fout("transform.out");	

	fin>>N;
	for(int i=0; i<N; i++) 
		for(int j=0; j<N; j++)	fin>>s[i][j];
	
	for(int i=0; i<N; i++) 
		for(int j=0; j<N; j++)	fin>>t[i][j];

	if(rot1(s, t))	fout << 1 << endl;	
	else if(rot2(s, t))	fout << 2 << endl;
	else if(rot3(s, t))	fout << 3 << endl;
	else if(reflect(s, t))	fout << 4 << endl;	
	else if(combine(s, t))	fout << 5 << endl;
	else if(same(s, t))	fout << 6 << endl;
	else	fout << 7 << endl;
}
