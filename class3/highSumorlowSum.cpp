#include <iostream>
using namespace std;
int main(){
    int a , b ;
    cout << "Enter a:" << endl ;
    cin >> a ;
    cout << "Enter b:" << endl ;
    cin >> b;
    if (a+b>=100) {
        cout << "High sum" << endl ;

    }else{
        cout << "Low sum" << endl;
    }
    return 0;
}