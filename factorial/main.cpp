#include <iostream>

using namespace std;

int main()
{
  int i, fact=1 , number;
  cout<<"Enter an even Number: "<<endl;

  cin>>number;

  if(number % 2 == 0)
  {
      for(i=1;i<=number;i++)
      {
          fact=fact*i;
      }
      cout<<"Factorial of " <<number<<" is: "<<fact<<endl;
  }
  else
 {
    cout<<"Entered an odd number";
 }

 return 0;
}
