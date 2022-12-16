/*Write a CPP program to accept an email address and throw an exception if it does not contain @ symbol*/

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
 cout<<"Errors and their code: "<<endl;
 cout<<"101. '@' is not present in the entered email."<<endl;
 cout<<"201.0f. '.' is not present in the entered email."<<endl;
 cout<<"c. 'dot' don't use '.' symbol at last in the entered email."<<endl;
 cout<<"______________________________________________________________"<<endl;
 char email[100];
 cout<<"\nEnter a valid enail: ";
 cin>>email;
 cout<<"\nEnterd email: "<<email<<endl<<endl;
 int i, at=-1, dot=-1, len=0;
 for(i=0; email[i]!='\0'; i++)
 {
   if(email[i]=='@')
      at++;
    if(email[i]=='.')
    {
      dot++;
      len=i;
    }
 }
 try
 {
   if(at==-1)
     throw 101;
   else if(dot==-1)
     throw 201.0f;
   else if(len>=strlen(email)-1)
     throw 'c';
   else
     cout<<"Yes, your email is correct."<<(strlen(email)-1)<<endl;
 }
 catch(int a)
 {
   cout<<"Exception caught.....Error"<<a<<endl;
 }
 catch(float f)
 {
   cout<<"Exception caught.....Error"<<f<<endl;
 }
 catch(char c)
 {
   cout<<"Exception caught.....Error "<<c<<endl;
 }
 return 0;
}
