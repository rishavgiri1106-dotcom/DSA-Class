#include <iostream>
using namespace std;

bool Prime(int n)
{
    if (n<2)
    return false;

    for (int i=2 ; i<n ; i++)
    {
        if (n%i==0)
        return false ;
    }
    return true ; 
}
int Factorial ( int n )
{
    int ans = 1 ;
    for (int i= 1 ; i<=n ; i++)
    ans = ans*i;

    return ans ;
}
int main()
{
    int a , b ;
    cout << "Enter your Number :";
    cin >> a >> b ;
    return 0;

}