#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int x; cin >> x;
        int ans = 0;
        if(x <= 20)
        {
            ans = x * 10;
        }
        else{
            int a = (x - 20)/2;
            int s = 20 * 10;
            int q = a * 5;
            ans = s + q;
        }
        cout << ans << endl;
    }
    
    return 0;
}