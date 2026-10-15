#include <iostream>
using namespace std ;
int main() {
    int a , b , c , d ;
    cout << "Enter a :" << endl ;
    cin >> a ;
    cout << "Enter b :" << endl ;
    cin >> b ;
    cout << "Enter c :" << endl ;
    cin >> c ;
    cout << "Enter d :" << endl ;
    cin >> d ;

    int product = a*b*c*d ;
    cout << "product of a , b , c , and d is :" << product << endl ;

    if (product > 1000)
    cout << "true" << endl ;
    else 
    cout << "false" << endl ;

    return 0 ;
}