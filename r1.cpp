#include <iostream>
using namespace std;
int main(){
// int a = 17;
// int b = 5;

// double x = a / b;
// double y = (double)a / b;

// cout << x << endl;
// cout << y << endl;

// int a = 8, b = 5, c = 8;

// cout << (a > b && b < c) << endl;
// cout << (a == c || a < b) << endl;
// cout << !(a == b) << endl;
// cout << (a < b && b > c) << endl;

// int a = 10, b = 20;

// int ans = (a > b) ? a : b;

// cout << ans;

// int a = 12, b = 7, c = 19;

// int ans = (a > b) ? ((a > c) ? a : c)
//                   : ((b > c) ? b : c);

// cout << ans;

// int a = 15;
// int b = 10;
// int c = 20;

// if(a > b)
// {
//     if(a > c)
//         cout << "A";
//     else
//         cout << "B";
// }
// else
// {
//     if(b > c)
//         cout << "C";
//     else
//         cout << "D";
// }

// int n = 2;

// switch(n)
// {
//     case 1:
//         cout << "A";

//     case 2:
//         cout << "B";

//     case 3:
//         cout << "C";
        
//     default:
//         cout << "D";
// }

// int choice;
// cin >> choice;

// switch(choice)
// {
//     case 1:
//         cout << "Add";

//     case 2:
//         cout << "Subtract";
//         break;

//     case 3:
//         cout << "Multiply";
//         break;

//     default:
//         cout << "Invalid";
// }

// for(int i = 2; i <= 20; i += 3)
// {
//     cout << i << " ";
// }

// for(int i = 1; i <= 3; i++)
// {
//     for(int j = 1; j <= 2; j++)
//     {
//         cout << i << j << " ";
//     }
// }


// int n;
// for(int i=10 ; i>=1 ; i=i-2)
// {
//     cout<<i<<" ";
// }


// for(int i=1 ; i<=100 ; i++)
// {
//     if(i%3==0 && i%5!=0)
//     {
//         cout<<i<<" ";
//     }
// }

int n = 1234;

while(n > 0)
{
    cout << n % 10 << " ";
    n = n / 10;
}
}