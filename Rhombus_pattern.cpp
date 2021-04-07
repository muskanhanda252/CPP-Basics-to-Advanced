#include<bits/stdc++.h>
using namespace std;
int Rhombus_pattern(int n);
int main()
{
int n;
cin>>n;
Rhombus_pattern(n);
return 0;
}

int Rhombus_pattern(int n)
{int i,j;
    for(i=0;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
