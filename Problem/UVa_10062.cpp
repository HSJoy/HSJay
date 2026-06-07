
#include <iostream>
#include <string>

using namespace std;

int main() {
    string line;
    bool first_case = true;  
    while (getline(cin, line)) {
              if (!first_case) {
            cout << "\n";
        }
        first_case = false;
        int freq[256] = {0};

            for (int i = 0; i < line.length(); i++) {
            if (line[i] == '\n' || line[i] == '\r') {
                continue;
            }
            int ascii_val = (int)line[i];
            freq[ascii_val]++;
        }

        for (int f = 1; f <= 1000; f++) {
            for (int c = 127; c >= 32; c--) {
                if (freq[c] == f) {
                    cout << c << " " << f << "\n";
                }
            }
        }
    }

    return 0;
}
