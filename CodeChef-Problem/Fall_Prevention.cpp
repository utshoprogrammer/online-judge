#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int n; cin >>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int sum = 0,mn = 0,min_indx = -1;
        for (int i = 0; i < n; i++)
        {
            sum += v[i];
            if(mn > v[i])
            {
                mn = v[i];
                min_indx = i;
            }
            if(sum < 0)
            {
                break;
            }
        }
        sum = 0;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if(i == min_indx)
            {
                continue;
            }
            sum += v[i];
            if(sum < 0)
            {
                flag = false;
                break;
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
    

    return 0;
}