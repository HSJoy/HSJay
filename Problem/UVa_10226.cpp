#include <iostream>
#include <string>
#include <map>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    cin.ignore(); // remove '\n'
    cin.ignore(); // remove blank line after T

    for (int tc = 0; tc < T; tc++) {
        map<string, int> trees;
        string species;
        int total = 0;

        while (getline(cin, species)) {
            if (species.empty()) break;

            trees[species]++;
            total++;
        }

        for (auto& p : trees) {
            cout << p.first << " "
                << fixed << setprecision(4)
                << (double)p.second * 100.0 / total
                << "\n";
        }

        if (tc != T - 1)
            cout << "\n";
    }

    return 0;
}
