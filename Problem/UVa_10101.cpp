
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

void bangla(long long n) {
    if (n == 0) return;

    //kuti 
    if (n >= 10000000) {
        bangla(n / 10000000);
        cout << " kuti";
        n %= 10000000; 

        if (n == 0 && n / 10000000 > 0) {
            cout << " kuti";
        }
    }

    // lakh 
    if (n >= 100000) {
        bangla(n / 100000);
        cout << " lakh";
        n %= 100000;
    }

    //hajar
    if (n >= 1000) {
        bangla(n / 1000);
        cout << " hajar";
        n %= 1000;
    }

    //shata 
    if (n >= 100) {
        bangla(n / 100);
        cout << " shata";
        n %= 100;
    }

    if (n > 0) 
        cout << " " << n;
}
int main() {
    long long n;
    long long num = 1;
	while (cin >> n) {
        cout << setw(4) << num << ".";
        if (n == 0) {
            cout << " 0";
        }
        else {
            bangla(n);
        }

        cout << endl;
        num++;
	}

	return 0;
}

