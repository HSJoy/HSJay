#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n < 2)
        return false;

    if (n == 2)
        return true;

    if (n % 2 == 0)
        return false;

    int limit = (int)sqrt(n);

    for (int i = 3; i <= limit; i += 2) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int reverseNumber(int n) {
    int rev = 0;

    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    return rev;
}

int main() {
    int n;

    while (cin >> n) {
        if (!isPrime(n)) {
            cout << n << " is not prime." << endl;
            continue;
        }

        int rev = reverseNumber(n);

        if (rev != n && isPrime(rev))
            cout << n << " is emirp." << endl;
        else
            cout << n << " is prime." << endl;
    }

    return 0;
}
