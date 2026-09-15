#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b; cin >> a >> b;
    int limak = a * 3;
    int bob = b * 2;

    int ans = abs(limak - bob);
    cout << ans << endl;
    return 0;
}