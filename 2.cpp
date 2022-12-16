/*Write a CPP program to demonstrate try, throw and catch statements*/

#include<iostream>
using namespace std;
int main()
{
  try		//try can be without throw statement but throw can never
  {
    throw 1; 	//throw statement must be in try block. 
  }		//end of the try body
  catch(int a)		//catch body must be start just after the try body
  {
    cout<<"\nWelcome in 'try, catch throw' topic related to \"Exception Handing\""<<endl;
  }		//end of the catch body
  cout<<"\nThank you so much dear learner."<<endl;
  return 0;
}
