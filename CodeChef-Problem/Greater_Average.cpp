#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t; cin >> t;
    while (t--)
    {
        float a,b,c; cin >> a >> b >> c;
        if((a+b)/2 > c)
        {
            cout <<"YES" << endl;
        }
        else{
            cout <<"NO" << endl;
        }
    }

    return 0;
}