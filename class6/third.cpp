#include <iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int ct=0;

    for (int i=n ; i>0 ; i=i/10){
        if (i%10)
            ct++;
    }
    cout << ct << endl;
}