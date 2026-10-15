#include <iostream>
using namespace std ;
int main() {
    int num ;
    cout << " Enter the number :" << endl ;
    cin >> num ;
    int sum = num%10 ;
    sum += num/100 ;
    num = num/10 ;
    sum += num%10 ;
    cout << "Sum of digits of n is : " << sum << endl ;

    return 0 ;
    

}