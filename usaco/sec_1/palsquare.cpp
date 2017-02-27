/*
ID: 
LANG: C++
TASK: palsquare
*/
 
#include <algorithm>
#include <cstdio>
using namespace std;
 
const char code[] = "0123456789ABCDEFGHIJ";
char buff[20], buff2[20];
 
int main()
{
	freopen("palsquare.in", "r", stdin);
	freopen("palsquare.out", "w", stdout);
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= 300; ++i)
	{
		char *p = buff, *q = buff;
		for (int sqr = i*i; *q++ = code[sqr%n], sqr /= n; );
		for (; p < --q; ++p)
			if (*p != *q)
				goto L1;
		q = buff2;
		for (int t = i; *q++ = code[t%n], t /= n; );
		reverse(buff2, q);
		printf("%s %s\n", buff2, buff);
L1:;
	}
}
