#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int x,y,z; cin >> x >> y >> z;
        if(y >= z){
            cout << -1 << endl;
        }
        else{
            for(int i = 1; i < 20000;i++)
            {
                int cur = i * z;
                int k = x + (i * y);
                if(cur >= k)
                {
                    cout << i << endl;
                    break;
                }
            }
        }
    }
}
