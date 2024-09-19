#include<iostream>
using namespace std;
int add(int a,int b)
{
    cout << "\nAddition Of 2 Values :" << endl;
    cout <<a+b;
    return 0;
}
int add(int a,int b,int c)
{
    cout << "\nAddition Of 3 Values :" << endl;
    cout <<a+b+c;
    return 0;
}
int main()
{
    int a,b,c;
    cout << "Enter the value of a :" << endl;
    cin >> a;
    cout << "Enter the value of b :" << endl;
    cin >> b;
    cout << "Enter the value of c :" << endl;
    cin >> c;
    add(a,b);
    add(a,b,c);
    return 0;
}