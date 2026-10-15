#include <iostream>
using namespace std;
int main(){

char c ;
cout << " Enter the character :" << endl ;
cin >> c ;

if ((c>='A' && c<='Z') || (c>='a' && c<='z'))
{
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
    {
        cout << " The Character is a Vowel." << endl ;
    }else
    {
        cout << " The Character is a Consonant." << endl ;
    }
}
else 
cout << " The character is not an Alphabet." << endl ;
    return 0 ;
}