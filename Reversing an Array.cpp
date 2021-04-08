#include<iostream>
using namespace std;
int main()
{
int n;
int temp=0;
cout<<"How many elements you want to enter? ";
cin>>n;
int arr[n];
cout<<"Now you can enter the elements: ";
for (int i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"Do you want to reverse the elements? (Y/N): "<<endl;
char choice;
cin>> choice;
if (choice == 'Y'){
cout<<"See them here: "<<endl;
for(int i=0;i<n;i++)
{
temp=arr[i];
arr[i]=arr[n-i-1];
arr[n-i-1]=temp;
}
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
}
else{
cout<<"Your secret is safe with us. Okay, bye ! ";
}
}
