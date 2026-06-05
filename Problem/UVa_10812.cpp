#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long s, d;
        cin >> s >> d;

        if (s < d || (s + d) % 2 != 0) {
            cout << "impossible\n";
            continue;
        }

        long long x = (s + d) / 2;
        long long y = s - x;

        cout << x << " " << y << '\n';
    }

    return 0;
}
