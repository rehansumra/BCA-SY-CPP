#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    char op;

    cout<<"enter the first number :";
    cin>>a;
    cout<<"enter the second number :";
    cin>>b;
    cout<<"select the oprator :";
    cin>>op;

    switch(op) {
    case '+':
        cout<<a+b;
        break;
    case '-':
        cout<<a-b;
        break;
    case '*':
        cout<<a*b;
        break;
    case '/':
        cout<<a/b;
        break;
    default:


        cout<<"Invalid OPrator";
    }
}