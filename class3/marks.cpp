#include <iostream>
using namespace std;
int main(){
    int a , b , c , d , e ;
    cout << "Enter marks of 5 subjects:" ;
    cin >> a >> b >> c >> d >> e ;
    int per = (a + b + c + d + e) / 5 ;

    if (per >= 90 && per <= 100){
        cout << "Your grade is A" << endl ;
    }
    else if (per >= 80 && per < 90){
        cout << "Your grade is B" << endl ;
    }
    else if (per >= 70 && per < 80){
        cout << "Your grade is C" << endl ;
    }
    else if (per >= 60 && per < 70){
        cout << "Your grade is D" << endl ;
    }
    else if (per >= 0 && per < 60){
        cout << "Your grade is F" << endl ;
    }
    else {
        cout << "Invalid marks entered." << endl ;
    }
    return 0 ;
    
}