#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while (b) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main() {
    long long G[501] = {0};

    for (int n = 2; n <= 500; n++) {
        G[n] = G[n - 1];

        for (int i = 1; i < n; i++) {
            G[n] += gcd(i, n);
        }
    }

    int N;

    while (cin >> N && N) {
        cout << G[N] << '\n';
    }

    return 0;
}
