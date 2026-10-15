#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int once = n%10;
    int tence=(n/10)%10;
    int hundred=(n/100)%10;
    int number=(once*100)+(tence*10)+100;
    cout<<"Reverse of the number is:"<<number<<endl;
    if(n==number)
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"Not a Palindrome"<<endl;
}
}
// got wrong answer