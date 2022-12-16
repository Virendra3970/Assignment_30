/*Write a C++ program to accept Nickname and throw an exception if it has greater than 8 characters or does contain a digit or special symbol or space.*/

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
  cout<<"Error 101. Don't use special character, digit or greater than 8 characters. "<<endl;
  char nickName[50];
  cout<<"\nEnter your good nick-name: ";
  cin>>nickName;
  int len=strlen(nickName);
  cout<<"Length is: "<<len<<endl;
  for(int i=0; i<len; i++)
  {
    try
    {
      if(len<8 && (nickName[i]>='A' || nickName[i]<='Z' && nickName[i]>='a' || nickName[i]<='z'))
      {
        cout<<"Ok, your nick-name is superb"<<endl;
        return 0;
      }
      else
       throw 101;
    }
    catch(int i)
    {
      cout<<"Exception Handlled.......Error"<<i<<endl;
      cout<<endl;
      return 0;
     }
   }
  return 0;
}
