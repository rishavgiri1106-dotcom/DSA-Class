#include <iostream>
using namespace std;
int main(){
    int side1 , side2 , side3;
    cout << "Enter three sides of a triangle :" ;
    cin >> side1 >> side2 >> side3 ;
    if(side1+side2>side3 && side2+side3>side1 && side1+side3>side2)
    {
        cout << "The triangle is valid." << endl ;
    
    
    if (side1 == side2 && side2 == side3){
        cout << "The triangle is equilateral." << endl ;
    }
    else if (side1 == side2 || side2 == side3 || side1 == side3){
        cout << "The triangle is isosceles." << endl ;
    }
    else {
        cout << "The triangle is scalene." << endl ;
    }
}
    
    else 
        cout << "The triangle is not valid." << endl ;
    
}