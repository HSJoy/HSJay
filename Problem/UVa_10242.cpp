#include <iostream>
#include <iomanip>

using namespace std;

struct Point {
    double x, y;
};

bool same(const Point& a, const Point& b) {
    return a.x == b.x && a.y == b.y;
}

int main() {
    Point p1, p2, p3, p4;

    while (cin >> p1.x >> p1.y
               >> p2.x >> p2.y
               >> p3.x >> p3.y
               >> p4.x >> p4.y) {

        Point ans;

        if (same(p1, p3)) {
            ans.x = p2.x + p4.x - p1.x;
            ans.y = p2.y + p4.y - p1.y;
        }
        else if (same(p1, p4)) {
            ans.x = p2.x + p3.x - p1.x;
            ans.y = p2.y + p3.y - p1.y;
        }
        else if (same(p2, p3)) {
            ans.x = p1.x + p4.x - p2.x;
            ans.y = p1.y + p4.y - p2.y;
        }
        else { // p2 == p4
            ans.x = p1.x + p3.x - p2.x;
            ans.y = p1.y + p3.y - p2.y;
        }

        cout << fixed << setprecision(3)
             << ans.x << " " << ans.y << endl;
    }

    return 0;
}
