#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    for (int tc = 1; tc <= T; tc++) {
        string tmp;
        char eq;
        int n;

        cin >> tmp >> eq >> n;

        vector<vector<long long>> M(n, vector<long long>(n));

        bool ok = true;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> M[i][j];

                if (M[i][j] < 0)
                    ok = false;
            }
        }

        for (int i = 0; i < n && ok; i++) {
            for (int j = 0; j < n; j++) {
                if (M[i][j] != M[n - 1 - i][n - 1 - j]) {
                    ok = false;
                    break;
                }
            }
        }

        cout << "Test #" << tc << ": ";

        if (ok)
            cout << "Symmetric.\n";
        else
            cout << "Non-symmetric.\n";
    }

    return 0;
}
