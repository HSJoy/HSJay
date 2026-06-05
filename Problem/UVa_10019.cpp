
#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T; 
    
    while (T--) {
        int M;
        cin >> M; 
        int b1 = 0;
        int temp1 = M; 
        while (temp1 > 0) {
            if (temp1 % 2 == 1) {
                b1++;
            }
            temp1 = temp1 / 2; 
        }
        
        int b2 = 0;
        int temp2 = M; 
        
        while (temp2 > 0) {
            int digit = temp2 % 10; 
            while (digit > 0) {
                if (digit % 2 == 1) {
                    b2++;
                }
                digit = digit / 2;
            }
            
            temp2 = temp2 / 10; 
        }
        cout << b1 << " " << b2 << endl;
    }
    
    return 0;
}
