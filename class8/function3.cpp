#include <iostream>
using namespace std;

int countDigits(long long n) {
    int count = 0;

    if (n == 0) {
        return 1;
    }

    while (n != 0) {
        n = n / 10;
        count++;
    }

    return count;
}

int main() {
    long long n;
    cin >> n;

    cout << countDigits(n) << endl;

    return 0;
}

        