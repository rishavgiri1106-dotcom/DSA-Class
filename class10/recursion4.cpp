#include <iostream>
using namespace std;

int reverseNumber(int n, int rev = 0) 
{
    //base case
    if (n == 0) return rev;
        
    //recursive case
    return reverseNumber(n / 10, rev * 10 + n % 10);
}

int main() 
{
    int n;
    cout<<"Enter your number:"<<endl;
    cin >> n;

    cout << reverseNumber(n)<<endl;

    return 0;
}


