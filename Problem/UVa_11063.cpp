#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    int tc = 1;

    while (cin >> N) {
        vector<long long> b(N);

        for (int i = 0; i < N; i++)
            cin >> b[i];

        bool ok = true;

        if (b[0] < 1)
            ok = false;

        for (int i = 1; i < N; i++) {
            if (b[i] <= b[i - 1]) {
                ok = false;
                break;
            }
        }

        set<long long> sums;

        for (int i = 0; i < N && ok; i++) {
            for (int j = i; j < N; j++) {
                long long s = b[i] + b[j];

                if (sums.count(s)) {
                    ok = false;
                    break;
                }

                sums.insert(s);
            }
        }

        cout << "Case #" << tc++ << ": ";

        if (ok)
            cout << "It is a B2-Sequence.\n\n";
        else
            cout << "It is not a B2-Sequence.\n\n";
    }

    return 0;
}
