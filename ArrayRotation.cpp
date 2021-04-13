#include <iostream>
using namespace std;
void Rotation_arr(int arr[],int n,int K);
int main() {
	int n,K;
	cin>>n;
	int arr[n];
	cin>>K;
	cout<<"Enter the elements of the array: \n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	Rotation_arr(arr,n,K);
return 0;
}

void Rotation_arr(int arr[],int n,int K)
{
	int i,j,B[n];
	for(i=0;i<n;i++)
	{
		B[(i+K)%n]=arr[i];
	}
	for(j=0;j<n;j++)
	{
		cout<<B[j]<<" ";
	}
}
