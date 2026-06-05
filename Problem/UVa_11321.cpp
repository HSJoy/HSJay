#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n,m;
bool cmp(int x, int y){
    int xOdd = abs (x % 2);
    int yOdd = abs (y % 2);

    if (x % m != y % m) return x%m < y%m; 
    if (xOdd != yOdd) return xOdd > yOdd; 
    if (xOdd) return x>y;
    else return x<y;
}

int main (){
    while (cin>>n>>m){
        cout<<n<<" "<<m<<endl;

        if (n == 0 && m == 0)break;
        vector<int>a;
        for (int i = 0; i < n; i++){
            int temp;
            cin>>temp;
            a.push_back(temp);
        }
        sort (a.begin(),a.end(),cmp);
        
        for (int i = 0; i < n; i++){
            cout<<a[i]<<endl;
        }
    }
    return 0;
}
