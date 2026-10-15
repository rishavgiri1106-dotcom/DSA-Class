#include <iostream>
using namespace std;
int main(){
    int a , b , c ,d ;
    cout << "Enter a:" << endl;
    cin >> a;
    cout << "Enter b:" << endl;
    cin >> b;
    cout << "Enter c:" << endl;
    cin >> c;
    cout << "Enter d:" << endl;
    cin >> d;

    if (a*b*c*d>=1000) {
        cout << "Good input " << endl ;
    }else 
    cout << "Bad input" << endl ;
    return 0;
}