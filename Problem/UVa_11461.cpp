#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b;

    while (cin >> a >> b && (a || b)) {
        int left = ceil(sqrt(a));
        int right = floor(sqrt(b));

        cout << right - left + 1 << '\n';
    }

    return 0;
}
