#include <iostream>
using namespace std;

void p1ton(int n) {
    //base case
    if(n==0) return;
    //recursive case
    p1ton(n-1);
    cout << n << " ";
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    p1ton(n);
    cout << endl;
    return 0;
}