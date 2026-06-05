#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>

using namespace std;

int N, L, ans;
vector<vector<pair<int, int>>> choices;

void dfs(int idx, set<int>& used) {
    if ((int)used.size() >= ans) return;

    if (idx == N) {
        ans = used.size();
        return;
    }

    for (auto p : choices[idx]) {
        bool a = used.insert(p.first).second;
        bool b = used.insert(p.second).second;

        dfs(idx + 1, used);

        if (b) used.erase(p.second);
        if (a) used.erase(p.first);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (cin >> N >> L) {
        vector<string> g(N);

        for (int i = 0; i < N; i++)
            cin >> g[i];

        map<string, int> id;
        int cnt = 0;

        choices.assign(N, {});

        for (int i = 0; i < N; i++) {
            vector<int> pos;

            for (int j = 0; j < L; j++)
                if (g[i][j] == '2')
                    pos.push_back(j);

            int k = pos.size();

            for (int mask = 0; mask < (1 << k); mask++) {
                string h1 = g[i];
                string h2 = g[i];

                for (int j = 0; j < L; j++) {
                    if (g[i][j] == '0' || g[i][j] == '1')
                        h1[j] = h2[j] = g[i][j];
                }

                for (int j = 0; j < k; j++) {
                    if (mask & (1 << j)) {
                        h1[pos[j]] = '0';
                        h2[pos[j]] = '1';
                    }
                    else {
                        h1[pos[j]] = '1';
                        h2[pos[j]] = '0';
                    }
                }

                if (!id.count(h1)) id[h1] = cnt++;
                if (!id.count(h2)) id[h2] = cnt++;

                choices[i].push_back({ id[h1], id[h2] });
            }
        }

        ans = 1000000;
        set<int> used;
        dfs(0, used);

        cout << ans << '\n';
    }

    return 0;
}
