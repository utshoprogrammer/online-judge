#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s; cin >> s;
    int sum = 0;
    for (int i = 1; i <= 4; i++)
    {
        sum += i;
    }
    int ans = sum - s;
    cout << ans << endl;   

    return 0;
}