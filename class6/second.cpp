#include <iostream>
using namespace std;
int main(){
    int n , x;
    cout << "Enter a number :" << endl;
    cin >> n;
    cout << "Enter second number:" << endl;
    cin >> x;
    for (int i=1 ; i<=n ; i++){
        cout << i << " * " << x << " = " << i*x << endl;
    }
    return 0 ;
}