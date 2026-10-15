#include <iostream>
using namespace std;

int sumOfDigit(long long n){
    int sum = 0;

    while (n!=0) {
        sum=sum+n%10;    //for dum of digits
        n = n/10;
    }
    return sum;
}

int countDigits(long long n) {
    int count = 0;

    if (n == 0) {
        return 1;
    }

    while (n != 0) {  //for count of digits
        n = n / 10;
        count++;
    }

    return count;
}


int main() {
    long long n;
    cout<<"Enter our number:"<<endl;
    cin>>n;
    cout<<sumOfDigit(n)<<endl; //function call
    cout<<countDigits(n)<<endl;

    return 0;
}