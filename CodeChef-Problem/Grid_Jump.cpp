#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--)
    {
        int a,b,p,q,r; cin >> a >> b >> p >> q >> r;
        int ans = 1e9;
        for(int i = 0;i <= min(a,b);i++)
        {
            int a_baki = a - i;
            int b_baki = b - i;
            int cur_cost = i * r;
            
            int a_step = (a_baki + 1) / 2;
            int b_step = (b_baki + 1) / 2;
            
            cur_cost += a_step * p;
            cur_cost += b_step * q;
            
            ans = min(ans,cur_cost);
        }
        cout << ans << endl;
    }
}
