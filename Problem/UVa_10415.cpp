#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();

    vector<vector<int>> note(128, vector<int>(10, 0));

    note['c'] = {0,1,1,1,0,0,1,1,1,1};
    note['d'] = {0,1,1,1,0,0,1,1,1,0};
    note['e'] = {0,1,1,1,0,0,1,1,0,0};
    note['f'] = {0,1,1,1,0,0,1,0,0,0};
    note['g'] = {0,1,1,1,0,0,0,0,0,0};
    note['a'] = {0,1,1,0,0,0,0,0,0,0};
    note['b'] = {0,1,0,0,0,0,0,0,0,0};

    note['C'] = {0,0,1,0,0,0,0,0,0,0};
    note['D'] = {1,1,1,1,0,0,1,1,1,0};
    note['E'] = {1,1,1,1,0,0,1,1,0,0};
    note['F'] = {1,1,1,1,0,0,1,0,0,0};
    note['G'] = {1,1,1,1,0,0,0,0,0,0};
    note['A'] = {1,1,1,0,0,0,0,0,0,0};
    note['B'] = {1,1,0,0,0,0,0,0,0,0};

    while (T--) {
        string song;
        getline(cin, song);

        vector<int> cnt(10, 0);
        vector<int> prev(10, 0);

        for (char ch : song) {
            for (int i = 0; i < 10; i++) {
                if (note[ch][i] && !prev[i])
                    cnt[i]++;

                prev[i] = note[ch][i];
            }
        }

        for (int i = 0; i < 10; i++) {
            if (i) cout << ' ';
            cout << cnt[i];
        }
        cout << '\n';
    }

    return 0;
}
