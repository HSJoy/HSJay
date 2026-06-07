
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int charValue(char c){
    if (c >= '0' && c <= '9') return c - '0';
    else if (c >= 'A' && c <= 'Z') return c - 'A' + 10;    else if (c >= 'a' && c <= 'z') return c - 'a' + 36;
    return -1;
}

int main (){
    string s;
    while (getline(cin,s)){
        long long sum = 0;
        int maxDigit = 1;
        for (char c : s){
            int val = charValue(c);
            if (val != -1) {
                sum += val;
                if (val > maxDigit)
                    maxDigit = val;
            }
        }

        bool found = false;
        for (int base = maxDigit + 1; base <= 62; base++){
            if (sum % (base - 1) == 0){
                cout << base << "\n";
                found = true;
                break;
            }
        }
        if (!found){
            cout << "such number is impossible!" << endl;
        }
    }           

    return 0;
}
