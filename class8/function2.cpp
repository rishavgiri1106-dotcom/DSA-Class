#include <iostream>
using namespace std;

long long Factorial ( int n )
{
    long long ans = 1 ;
    for (int i= 1 ; i<=n ; i++)
    ans = ans*i;

    return ans ;
}
int main()
{
    int a , b ;
    cout << "Enter your Number :";
    cin >> a >> b ;
    cout << "Factorial of " << a << " is " << Factorial(a) << endl;
    cout << "Factorial of " << b << " is " << Factorial(b) << endl;
    return 0;
}