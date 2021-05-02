#include<bits/stdc++.h>
using namespace std;
int main()
{
string food="pizza";
string *ptr=&food;
cout<<food<<endl;  //should give pizza
cout<<&food<<endl; //should give address of food
cout<<ptr<<endl;   //should give address of food
cout<<*ptr<<endl;  //should give value of food=pizza
*ptr="maggi";      //we have changed the value using pointer
cout<<food<<endl;  //should give maggi
cout<<&food<<endl; //should give address of food
cout<<ptr<<endl;   //should give address of food
cout<<*ptr;      //should give value of food=maggi
return 0;
}
