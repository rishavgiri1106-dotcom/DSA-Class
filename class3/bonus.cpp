#include <iostream>
using namespace std;
int main(){
    double salary ;
    int years ;
    cout << "Enter your salary :" << endl;
    cin >> salary ;
    cout << "Enter your year of service :" << endl;
    cin >> years;

    if (years>5)
    {
        double bonus = salary*0.05 ;
        cout << " You are eligible and Your bonus is :" << bonus << endl;
    }
    else
    {
        cout << "You are not eligible for a bonus." << endl;
    }
return 0 ;
}