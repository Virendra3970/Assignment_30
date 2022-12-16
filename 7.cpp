/*Write a CPP program to accept a username has less than 6 characters or does not contain any digit or special symbol. */

#include<iostream>
#include<ctype.h>
#include<cstring>
using namespace std;
int main()
{
  char u[20];
  cout<<"Enter a user name: ";
  cin>>u;
  int len=strlen(u);
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
       if((u[i]>='A' && u[i]<='Z' || u[i]>='a' && u[i]<='z'))
         isAlpha=1;
       else if(u[i]>='0' && u[i]<='9')
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
      cout<<"Number of characters is exceed"<<endl;
     if(a==1)
       cout<<"Use of digits not found "<<endl;
     if(a==2)
       cout<<"Use of alphabates not found"<<endl;
     if(a==3)
       cout<<"Use of special characters not found"<<endl;
    }
    catch(...)
    {
      cout<<"System generated exception."<<endl;
    }
  if(isCorrect==1)   
    cout<<"Username accepted."<<endl;
  return 0;
}
