#include <iostream>
#include <string>

using namespace std;

int main() {
    string a, b;

    while (getline(cin, a) && getline(cin, b)) {
        int freqA[26] = {0};
        int freqB[26] = {0};

        for (char c : a) {
            freqA[c - 'a']++;
        }

        for (char c : b) {
            freqB[c - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            int common = min(freqA[i], freqB[i]);

            for (int j = 0; j < common; j++) {
                cout << char('a' + i);
            }
        }

        cout << endl;
    }

    return 0;
}
