#include <iostream>
#include <vector>

using namespace std;

long long getCost(long long n, int base, const vector<int>& cost) {
    if (n == 0)
        return cost[0];

    long long total = 0;

    while (n > 0) {
        total += cost[n % base];
        n /= base;
    }

    return total;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    for (int tc = 1; tc <= T; tc++) {
        vector<int> cost(36);

        for (int i = 0; i < 36; i++)
            cin >> cost[i];

        int Q;
        cin >> Q;

        cout << "Case " << tc << ":\n";

        while (Q--) {
            long long n;
            cin >> n;

            vector<int> bestBases;
            long long bestCost = -1;

            for (int base = 2; base <= 36; base++) {
                long long c = getCost(n, base, cost);

                if (bestCost == -1 || c < bestCost) {
                    bestCost = c;
                    bestBases.clear();
                    bestBases.push_back(base);
                }
                else if (c == bestCost) {
                    bestBases.push_back(base);
                }
            }

            cout << "Cheapest base(s) for number " << n << ":";

            for (int b : bestBases)
                cout << " " << b;

            cout << "\n";
        }

        if (tc != T)
            cout << "\n";
    }

    return 0;
}
