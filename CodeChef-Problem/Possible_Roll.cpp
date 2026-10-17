#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x,k,y; cin >> x >> k >> y;
    string ans = "NO";
    for (int i = 1; i <= x; i++)
    {
        if(i*k == y)
        {
            ans = "YES";
        }
    }
    cout << ans << endl;

    return 0;
}