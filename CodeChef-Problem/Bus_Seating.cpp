#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int n,k; cin >> n >> k;
        int ans = k-n;
        if(ans > 0)
        {
            cout << ans*2 << endl;
        }
        else{
            cout << 0 << endl;
        }
    }  

    return 0;
}