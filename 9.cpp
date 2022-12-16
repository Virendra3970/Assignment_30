/*Write a c++ program to accept Gmail ID only and throw an exception if it does not contain @ and gmail.com*/

#include<iostream>
#include<string.h>
using namespace std;
bool checkGmaildotcom(char email[], char gmail[])
{
  int m=strlen(email);
  int n=strlen(gmail);
  for(int i=0; i<=m-n; i++)
  {
    int j;
    for(j=0; j<n; j++)
      if(email[i+j]!=gmail[j])
         break;
    if(j==n)
      return 0;
  }
  return 1;
}
int main()
{
 cout<<"Errors and their code: "<<endl;
 cout<<"101. '@' is not present in the entered email."<<endl;
 cout<<"20.1. '.' is not present in the entered email."<<endl;
 cout<<"3. 'dot' don't use '.' symbol at last in the entered email."<<endl;
 cout<<"gmail.com// Entered email has not gmail.com domain."<<endl;
 cout<<"______________________________________________________________"<<endl;
 char email[100], gmail[]="gmail.com";
 cout<<"\nEnter a valid enail: ";
 cin>>email;
 cout<<"\nEnterd email: "<<email<<endl<<endl;
 int i, at=-1, dot=-1, length=0;
 for(i=0; email[i]!='\0'; i++)
 {
   if(email[i]=='@')
      at++;
    if(email[i]=='.')
    {
      dot++;
      length=i;
    }
 }
 try
 {
   if(at==-1)
     throw 101;
   else if(dot==-1)
     throw 201.0f;
   else if(length>=strlen(email)-1)
     throw '3';
  else if(checkGmaildotcom(email, gmail))
     throw 20.10;
   else
     cout<<"Yes, your email is correct."<<endl;
 }
 catch(int a)
 {
   cout<<"Exception caught.....Error "<<a<<endl;
 }
 catch(float f)
 {
   cout<<"Exception caught.....Error "<<f<<endl;
 }
 catch(char c)
 {
   cout<<"Exception caught.....Error "<<c<<endl;
 }
 catch(double a)
 {
   cout<<"Exception caught.....Error "<<a<<endl;
 }
 return 0;
}
