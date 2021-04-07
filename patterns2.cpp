#include<bits/stdc++.h>
using namespace std;

int main()
	{
int n;
cout << "Enter number of rows to be printed\n";
cin >> n;
for (int i = 0; i < n - 1; ++i)	//for row till second-last
{
int j;
for (j = 1; j <= n + i; ++j)	//moving cursor from first to last place of line
{
if (j == n - i || j == n + i)	//printing star as required
cout << "*";
else	//printing space
cout << " ";
}
cout << endl;	//going to new line after completing one row
}
return 0;
}
