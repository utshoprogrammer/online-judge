#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t; cin >> t;
    while (t--)
    {
        int n; cin >>n;
        string s,t; cin >> s >> t;
        int count1 = 0,count2 = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i] == '1')
            {
                count1++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if(t[i] == '1')
            {
                count2++;
            }
        }
        if(count1%2 == count2%2)
        {
            cout <<"YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
    }

    return 0;
}