#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter any Number :" << endl;
    cin >> num;
    if(num%2==0) {
        cout << "THIS IS EVEN NUMBER" << endl;
    }
    else {
        cout << "THIS IS ODD NUMBER" << endl;
    }
    return 0;
}