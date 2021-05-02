#include<bits/stdc++.h>
using namespace std;
int main()
{
int B[2][3]={1,3,5,2,4,6};
int (*p)[3]= B;
cout<<p<<endl; //&B[0]
cout<<*p<<endl; //value of B[0], pointing to B[0][0]
cout<<*(*p)<<endl; //value of B[0][0]
cout<<p+1<<endl; //&B[0] + size of 1d array having 3 elements
cout<<*p+1<<endl; //value of p+1 = B[1], pointing to B[1][0]
cout<<(*(p+1)+2)<<endl; //address of B[1][0] + 8 bytes = address of B[1][2]
cout<<(*(*(p+1)+2))<<endl; //value at the address of B[1][2]
cout<<(*(*p+2)); //value B[0][2]
return 0;
}
