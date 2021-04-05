#include<iostream>
using namespace std;
int main()
{
int num,sum=0;
cout<<"ENTER THE NUMBER" <<endl;
cin>>num;
for (int i=1;i<=num;i++)
{
sum=sum+i;
}
cout<<"The sum of first n natural numbers is "<<sum<<endl;
return 0;
}
