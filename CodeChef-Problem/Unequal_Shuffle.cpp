#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string a,b; cin >> a >> b;

        sort(a.begin(),a.end());
        sort(b.rbegin(),b.rend());

        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            if(a[i] == b[i])
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1) cout <<"YES" << endl;
        else cout <<"NO" << endl;
    }
    

    return 0;
}