/*Write a CPP program to perform arithmatic operations on two numbers and throw an exeption if the dividend is zero or does not contain an operator.*/

#include<iostream>
using namespace std;
int main()
{
  float num1, num2, ans;
  char Operator;
  cout<<"Errors and their codes: "<<endl;
  cout<<"201. Operator is not valid."<<endl;
  cout<<"101. Divisor never be zero"<<endl;
  cout<<"--------------------------"<<endl<<endl;
  cout<<"Perform arithmatic operations on two numbers: "<<endl;
  cout<<"----------------------------------------------"<<endl<<endl;
  cout<<"Enter the first number: ";
  cin>>num1;
  cout<<"\nEnter a valid arithmatic operator: ";
  cin>>Operator;
  try
  {
    if(Operator!='+' && Operator!='-' && Operator!='-' && Operator!='/' )
                           throw 201;
    else
    {
      cout<<"\nEnter the sercond operator: ";
      cin>>num2;
      cout<<"----------------------------------------------"<<endl<<endl;
    }
  }
  catch(int a)
  {
    cout<<"Exception caught....//Error "<<a<<endl;
    cout<<"Try Again"<<endl;
    return 0;
  }
  switch(Operator)
  {
    case '+':
      ans=num1+num2;
      break;
    case '-':
      ans=num1-num2;
      break;
    case '*':
      ans=num1*num2;
      break;
    case '/':
      try
      {
	if(num2==0)      
	   throw 101;
	else
	{
	  ans=num1/num2;
      	  break;
	}
      }
      catch(int a)
      {
       	cout<<"Exception caught....//Error "<<a<<endl;
        return 0;
      }
    default:
      exit(0);
    }
    cout<<"Answer: "<<ans<<endl;
  return 0;
}
