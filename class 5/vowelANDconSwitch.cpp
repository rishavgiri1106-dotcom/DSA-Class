#include <iostream>
using namespace std;
int main(){

    char ch ; 
    cin>> ch ;
    if ((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
    

    switch(ch){
        case 'A': cout<<" The character is a Vowel." << endl; break;
        case 'a': cout<<" The character is a Vowel." << endl;break;
        case 'E': cout<<" The character is a Vowel." << endl;break;
        case 'e': cout<<" The character is a Vowel." << endl;break;
        case 'I': cout<<" The character is a Vowel." << endl;break;
        case 'i': cout<<" The character is a Vowel." << endl;break;
        case 'O': cout<<" The character is a Vowel." << endl;break;
        case 'o': cout<<" The character is a Vowel." << endl;break;
        case 'U': cout<<" The character is a Vowel." << endl;break;
        case 'u': cout<<" The character is a Vowel." << endl;break;
        default: cout << " The character is a Consonant." << endl ;
    }
}
else cout << "The character is not an Alphaber." << endl;
}