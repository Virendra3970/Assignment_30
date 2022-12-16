/*Write a CPP program to accept a mobile number and throw an exception if it does not contain 10 digits.*/

#include<iostream>
using namespace std;
int main()
{
  int mob,count=0;
  cout<<"\nEnter a valid mobile number: ";
  cin>>mob;
  for(int i=1; i<=10; i++)
  { count++;}
  try
  {
    if(count==10)
      throw mob;
    else
       cout<<"Entered mobile number "<<mob<<" is not valid."<<endl;
  }
  catch(int a)
  {
    cout<<"Entered mobile number "<<a<<" is valid."<<endl;
  }
  return 0;
}
