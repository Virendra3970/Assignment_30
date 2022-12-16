/*Write a CPP program to demonstrate the use of try, catch block with the argument as an integer and string using multiple catch blocks.*/

#include<iostream>
using namespace std;
bool isLeapYear(int);
int main()
{
  int y;
  char ch[]="Yes";
  char cha[]="No";
  cout<<"Enter a year: "<<endl;
  cin>>y;
  try
  {
    if(isLeapYear(y))
       throw ch;
    else 
       throw 0;
  }
  catch(int a)
  {
    cout<<"No, "<<y<<" is not a leap year."<<endl;
  }
  catch(char a[])
  {
    cout<<a<<", "<<y<<" is a leap year."<<endl;
  }
  cout<<"Exception Handlled"<<endl;
  return 0;
}

bool isLeapYear(int x)
{
  if(x%4==0 || x%100==0 && x%400==0)
    return 1;
  else 
    return 0;
}

