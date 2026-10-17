#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s;
        cin >> s;
        int l = 0,r = 0,u = 0,d = 0;
        for(auto val : s)
        {
            if(val == 'L') l++;
            else if(val == 'R') r++;
            else if(val == 'D') d++;
            else u++;
        }
        if(l == r && abs(u - d) == 2)
        {
            cout <<"YES" << endl;
        }
        else if(u == d && abs(l-r) == 2)
        {
            cout <<"YES" << endl;
        }
        else{
            cout <<"NO" << endl;
        }
    }

    return 0;
}