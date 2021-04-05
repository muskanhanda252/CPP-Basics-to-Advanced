#include <iostream>
using namespace std;
int main()
{
  int n, i, flag;
  cout << "Enter the Number to check Prime or not: ";
  cin >> n;
  for(i = 2; i < n/2; i++)
  {
      if(n % i == 0)
      {
          flag=1;        /*there is a loop that runs from 2 to half of n, where n is the number to be determined.
                           Each of the values of the loop divide n. If the remainder of this division is 0, that means n is divisible by a number,
                           not one or itself. So, it is not a prime number and the flag is set to 1. Then break statement is used to exit the loop.*/
          break;
      }
      else
      {
      flag=0;
      break;
      }
  }
  if (flag==1)          /*If the value of flag remained zero, then the number is a prime number and that is displayed.
                          If the value of flag was changed to one, then the number is not a prime number and that is displayed.*/
    cout<<"not prime";
  else
    cout<<"prime";
  return 0;
}
