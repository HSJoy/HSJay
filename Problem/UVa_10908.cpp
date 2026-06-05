#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int M, N, Q;
        cin >> M >> N >> Q;
        vector<string> grid(M);
        for (int i = 0; i < M; ++i) {
            cin >> grid[i];
        }

        vector<pair<int, int>> queries(Q);
        for (int i = 0; i < Q; ++i) {
            cin >> queries[i].first >> queries[i].second;
        }

        cout << M << " " << N << " " << Q << "\n";

        for (auto& q : queries) {
            int r = q.first;
            int c = q.second;
            int max_side = 1; 

            int k = 0;
            while (true) {
                int top = r - k;
                int bottom = r + k;
                int left = c - k;
                int right = c + k;

                if (top < 0 || bottom >= M || left < 0 || right >= N)
                    break;


                char center_char = grid[r][c];
                bool valid = true;
                for (int i = top; i <= bottom && valid; ++i) {
                    for (int j = left; j <= right; ++j) {
                        if (grid[i][j] != center_char) {
                            valid = false;
                            break;
                        }
                    }
                }

                if (valid) {
                    max_side = 2 * k + 1;
                    ++k; 
                }
                else {
                    break;
                }
            }

            cout << max_side << "\n";
        }
    }

    return 0;
}
