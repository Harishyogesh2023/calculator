#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    char str;
    cout<<"enter number 1 :";
    cin>>n1;
    cout<<"enter number 2 :";
    cin>>n2;
    cout<<"enter the operation like(+,-,*,/,%) :";
    cin>>str;
    try{
    switch (str)
    {
    case '+':
         cout<<"answer is :"<<n1+n2;
        break;
     case '-':
         cout<<"answer is :"<<n1-n2;
        break;
     case '*':
         cout<<"answer is :"<<n1*n2;
        break;
     case '/':
           if(n2==0)
           {
              throw 0;
           }
         cout<<"answer is :"<<n1/n2;
        break;
     case '%':
         cout<<"answer is :"<<n1%n2;
        break;        
    
    default:
         cout<<"enter valid option!!!";
        break;
    }
    }
    catch(int a)
    {
        cout<<"exception is occur 'enter vaild value'";
    }
    return 0;
}
