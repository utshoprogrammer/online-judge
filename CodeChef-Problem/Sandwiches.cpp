#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int b,h,c;
    cin >> b >> h >> c;

    int total = b/2;
    int total2 = h+c;
    if(total <= total2)
    {
        cout << total << endl;
    }
    else
    {
        cout << total2 << endl;
    }

    return 0;
}