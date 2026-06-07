#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long S, D;

    while (cin >> S >> D) {
        long long lo = 1, hi = 2000000000LL;

        while (lo < hi) {
            long long mid = lo + (hi - lo) / 2;

            __int128 days = (__int128)mid * (2 * (__int128)S + mid - 1) / 2;

            if (days >= D)
                hi = mid;
            else
                lo = mid + 1;
        }

        cout << S + lo - 1 << '\n';
    }

    return 0;
}
