#include <iostream>
using namespace std;

//Function to Rotate the array
void RotArray(int a[],int n,int k)
{
 int b[n],i;
 for(i=0;i<n;i++)
  b[(i+k)%n]=a[i];

 for(i=0;i<n;i++)
  cout<<b[i]<<" ";

}
//Main Function
int main()
{
 int n,i,k;

 cout<<"Enter values n & k \n";
 cin>>n>>k;
 int a[n];
 cout<<"Input Array Elements\n";
 for(i=0;i<n;i++)
 cin>>a[i];
 RotArray(a,n,k);

return 0;
}
