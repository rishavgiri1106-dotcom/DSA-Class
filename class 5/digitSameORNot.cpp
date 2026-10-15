#include <iostream>
using namespace std;
int main(){
    int a , b ;
    cout << "Enter first number:" << endl;
    cin >> a ;
    cout << "Enter second number:" << endl;
    cin>> b ;
    int a1 = a/10 , a2 = a%10 , b1 = b/10 , b2 = b%10 ;

    if (a1==b1 || a1==b2 || a2==b1 || a2==b2)
    {
        cout << "True, they have at least one digit in common." << endl;
    }
    else
    {
        cout << "False, they do not have any digit in common." << endl;
    }

}