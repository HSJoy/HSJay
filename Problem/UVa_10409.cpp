#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;

    while (cin >> n && n != 0) {
        int top = 1;
        int bottom = 6;
        int north = 2;
        int south = 5;
        int west = 3;
        int east = 4;

        for (int i = 0; i < n; i++) {
            string cmd;
            cin >> cmd;

            int t = top;
            int b = bottom;
            int no = north;
            int so = south;
            int w = west;
            int e = east;

            if (cmd == "north") {
                top = so;
                north = t;
                bottom = no;
                south = b;
            }
            else if (cmd == "south") {
                top = no;
                north = b;
                bottom = so;
                south = t;
            }
            else if (cmd == "east") {
                top = w;
                east = t;
                bottom = e;
                west = b;
            }
            else if (cmd == "west") {
                top = e;
                east = b;
                bottom = w;
                west = t;
            }
        }

        cout << top << endl;
    }

    return 0;
}
