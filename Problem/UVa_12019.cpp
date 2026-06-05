#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    int monthDays[] = {
        0,
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    string week[] = {
        "Saturday",
        "Sunday",
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday"
    };

    while (T--) {
        int M, D;
        cin >> M >> D;

        int days = 0;

        for (int i = 1; i < M; i++)
            days += monthDays[i];

        days += D - 1;

        cout << week[days % 7] << endl;
    }

    return 0;
}
