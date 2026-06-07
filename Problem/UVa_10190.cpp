#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long n, m;

    while (cin >> n >> m) {
        if (m <= 1 || n <= 1 || n < m) {
            cout << "Boring!\n";
            continue;
        }

        vector<long long> sequence;
        bool is_boring = false;

        while (n > 1) {
            sequence.push_back(n); 
            if (n % m != 0) {
                is_boring = true;
                break; 
            }
            
            n /= m; 
        }

        if (!is_boring && n == 1) {
            sequence.push_back(1);
            for (int i = 0; i < sequence.size(); i++) {
                cout << sequence[i];
                if (i < sequence.size() - 1) {
                    cout << " ";
                }
            }
            cout << "\n";
        } else {
            cout << "Boring!\n";
        }
    }

    return 0;
}

