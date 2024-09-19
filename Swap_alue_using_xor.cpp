#include <iostream>
using namespace std;

int main() {
    int p,q;

    cout<<"Enter value of p: "<<endl;
    cin >> p;
    cout << "Enter value of q:" << endl;
    cin >> q;
    cout << "Before swap value:" <<" p = "<<p<<", q = "<<q<< endl;

    p = p ^ q;
    q = p ^ q;
    p = p ^ q;

    cout << "After swap value :" << " p = "<<p<<", q = "<<q<<endl;
    return 0;
}