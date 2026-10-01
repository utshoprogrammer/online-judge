#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n,d; cin >> n >> d;
    vector<long long int> v(n+1);
    for(int i = 1; i <= n;i++)
    {
        cin >> v[i];
    }
    vector<long long int> ans;
    for (int i = 1; i <= n; i++)
    {
        bool flag = true;
        for (int j = 1; j <= n; j++)
        {
            if(i == j)
            {
                continue;
            }
            else if(abs(v[i] - v[j]) < d)
            {
                flag = false;
                break;
            }
        }
        if(flag)
            ans.push_back(i);
        
    }
    cout << ans.size() << endl;
    for(auto val : ans)
    {
        cout << val <<" ";
    }
    cout << endl;

    return 0;
}