#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int T;
    if (cin >> T) {
        while (T--) {
            int N, P;
            cin >> N >> P;
          
            int days[3651] = {0}; 
            for (int i = 0; i < P; i++) {
                int h;
                cin >> h;
              
                for (int j = h; j <= N; j += h) {
                    days[j] = 1; 
                }
            }
            
            int lost_days = 0;
            for (int i = 1; i <= N; i++) {
                // Skip Fridays and Saturdays 
                if (i % 7 == 6 || i % 7 == 0) {
                    continue;
                }
                if (days[i] == 1) {
                    lost_days++;
                }
            }
            
            cout << lost_days << endl;
        }
    }
    return 0;
}
