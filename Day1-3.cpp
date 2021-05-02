#include<bits/stdc++.h>
using namespace std;
int main()
{
int A[3]={1,4,3};
for(int i=0;i<3;i++) //loop to print the values of array using pointers
{
    int *ptr=&A[0];
cout<<*(ptr+i)<<" ";
}
for(int i=0;i<3;i++) //loop to print the address of elements of array using pointers
{
    int *ptr=&A[0];
cout<<(ptr+i)<<" ";
}
return 0;
}
