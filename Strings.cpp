#include<bits/stdc++.h>
using namespace std;
int main()  {
    string A, B;
    cin>>A>>B;
    // YOUR CODE GOES HERE
    cout<<A.size()<<" "<<B.size()<<endl;
    cout<<A+B<<endl;
    swap(A[0], B[0]);
    cout<<A<<" "<<B<<endl;
    return 0;
}
