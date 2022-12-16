/*Write a CPP program to acdcept area pin code and throw an exception if it does not contain 6 digits.*/

#include<iostream>
using namespace std;
int main()
{
 int pincode,count=0;
 cout<<"Enter the area pin code: ";
 cin>>pincode;
 while(pincode!=0)
 {
   pincode=pincode/10;
   count++;
 }
 try
 {
   if(count==6)
    throw pincode;
   else
     cout<<"Entered pincode is not valid."<<endl;
  }
  catch(int a)
  {
      cout<<"Entered pincode is valid."<<endl;
  }
  cout<<"Exception handlled."<<endl;
 return 0;
}
