#include <iostream>
using namespace std;

int f(int n , int & pow){

    //base case
    if(n<100) {pow++ ; return n;}

    //recursive case
    int rdr = f(n/10 , pow);
    const int powr=pow++;
    int temp=1;
    //separate calc of 10^powr
    for(int i=1 ; i<=powr ; i++) temp*=10;
    return (n%10)*temp+rdr;
}

int main(){
    
    int n;
    cin>>n;
    int pow=0;
    cout<<f(n , pow)<<endl;
    cout<<pow<<endl;
    return 0;
}