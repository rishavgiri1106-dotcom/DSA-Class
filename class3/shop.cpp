#include <iostream>
using namespace std;
int main(){
    int  quantity ;
    
    cout << "Enter quantity :" << endl ;
    cin >> quantity ;
    
    if  (quantity*100 > 1000){
        cout << "You are eligible for a discount of 10% on your total bill." << endl ;
    }else{
        cout << "You are not eligible for a discount." << endl ;
    }
return 0 ;
}