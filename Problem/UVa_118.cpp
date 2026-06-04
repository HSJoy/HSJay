#include <iostream>
#include <set>
using namespace std;

int main() {
    int maxX, maxY;
    cin >> maxX >> maxY;

    set<pair<int, int>> scent;

    int x, y;
    char dir;
    string instructions;


    int dx[] = { 0, 1, 0, -1 };
    int dy[] = { 1, 0, -1, 0 };
    char dirs[] = { 'N', 'E', 'S', 'W' };

    auto getDirIndex = [&](char d) {
        for (int i = 0; i < 4; i++)
            if (dirs[i] == d) return i;
        return 0;
        };

    while (cin >> x >> y >> dir) {
        cin >> instructions;

        int d = getDirIndex(dir);
        bool lost = false;

        for (char inst : instructions) {
            if (inst == 'L') {
                d = (d + 3) % 4; 
            }
            else if (inst == 'R') {
                d = (d + 1) % 4; 
            }
            else if (inst == 'F') {
                int nx = x + dx[d];
                int ny = y + dy[d];

                if (nx < 0 || nx > maxX || ny < 0 || ny > maxY) {

                    if (scent.count({ x, y })) {
                        continue;
                    }
                    else {

                        scent.insert({ x, y });
                        lost = true;
                        break;
                    }
                }
                else {
                    x = nx;
                    y = ny;
                }
            }
        }

        cout << x << " " << y << " " << dirs[d];
        if (lost) cout << " LOST";
        cout << endl;
    }

    return 0;
}
