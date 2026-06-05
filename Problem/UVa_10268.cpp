#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string lineX, lineCoef;

    while (getline(cin, lineX)) {
        if (!getline(cin, lineCoef))
            break;

        long long x;
        stringstream sx(lineX);
        sx >> x;

        vector<long long> a;
        stringstream sc(lineCoef);

        long long value;
        while (sc >> value)
            a.push_back(value);

        int n = a.size() - 1;

        if (n == 0) {
            cout << 0 << endl;
            continue;
        }

        long long result = a[0] * n;

        for (int i = 1; i < n; i++) {
            result = result * x + a[i] * (n - i);
        }

        cout << result << endl;
    }

    return 0;
}
