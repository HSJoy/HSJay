#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    long long n;

    while (cin >> n && n) {
        string bin;
        int ones = 0;

        while (n > 0) {
            if (n % 2)
                ones++;

            bin += char('0' + (n % 2));
            n /= 2;
        }

        reverse(bin.begin(), bin.end());

        cout << "The parity of " << bin
             << " is " << ones
             << " (mod 2)." << '\n';
    }

    return 0;
}
