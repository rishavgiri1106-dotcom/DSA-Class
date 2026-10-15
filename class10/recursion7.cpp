
#include <iostream>
using namespace std;
                                                            
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }

    return gcd(b, a % b);
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b);
    return 0;
}





//with while loop


// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;      
//     cin >> a >> b;

//     while (b != 0) {
//         int r = a % b;
//         a = b;
//         b = r;
//     }

//     cout << a;
//     return 0;
// }