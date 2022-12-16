/*Write a C++ program to accept a password and throw an exception if the password has less than 6 characters or does not contain a digit or does not contain any special character or does not contain any capital letter.*/

#include<iostream>
#include<ctype.h>
#include<cstring>
using namespace std;
int main()
{
  char p[20];
  cout<<"Enter a user name: ";
  cin>>p;
  int len=strlen(p);
  cout<<"Length is: "<<len<<endl;
  int isCorrect=0,isDigit=0, isSpecial=0, isAlpha=0;
  try
  {
    if(len>=6)
    {
      throw 0;
    }
    for(int i=0; i<len; i++)
    {
       if((p[i]>='A' && p[i]<='Z' || p[i]>='a' && p[i]<='z'))
         isAlpha=1;
       else if(p[i]>='0' && p[i]<='9')
         isDigit=1;
       else
        isSpecial=1;
    }
    
    if(isDigit==0)
      throw 1;
    if(isAlpha==0)
      throw 2;
    if(isSpecial==0)
      throw 3;
    isCorrect=1;
   }
    catch(int a)
    {
     if(a==0)
      cout<<"Number of characters is exceed in entered password"<<endl;
     if(a==1)
       cout<<"Use of digits not found in entered password"<<endl;
     if(a==2)
       cout<<"Use of alphabates not found in entered password"<<endl;
     if(a==3)
       cout<<"Use of special characters not found in entered password"<<endl;
    }
    catch(...)
    {
      cout<<"System generated exception."<<endl;
    }
  if(isCorrect==1)   
    cout<<"Username accepted."<<endl;
  return 0;
}
