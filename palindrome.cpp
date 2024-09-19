#include <iostream>
using namespace std;
int main()
{
    int n,j,i=0,rel;
    cout<<"Enter the Number=";
    cin>>n;
    rel=n;
    while(n>0)
    {
        j=n%10;
        i=(i*10)+j;
        n=n/10;
    }
    if(rel==i)
        cout<<"Number is Palindrome.";
    else
        cout<<"Number is not Palindrome.";
    return 0;
}