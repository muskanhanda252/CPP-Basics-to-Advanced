#include<bits/stdc++.h>
using namespace std;
int main()
{
int A[3]={1,4,3};
int *ptr= A;
cout<<*(ptr+1)<<endl; //next value of array,i.e A[1]=4
cout<<(*ptr+1)<<endl;//*ptr=1, we are adding 1 in it, so answer=2
cout<<ptr+1<<endl;
cout<<ptr;
return 0;
}
