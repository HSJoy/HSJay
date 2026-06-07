
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main (){
    vector<long long> num;
    long long x;

    while (cin>>x){
        num.push_back(x);
        sort (num.begin(), num.end());

        int n = num.size();
        if (n%2==1) {
            cout <<  num[n/2] << endl; 
        }
        else {
            cout << (num[n/2-1] + num[n/2]) /2 << endl;
        }
    }

    return 0;
