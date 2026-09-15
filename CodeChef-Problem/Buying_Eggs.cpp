#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x,y,f; cin >> x >> y >> f;
    int ans = min((x*12),((y*12)+f));
    cout << ans << endl;

    return 0;
}