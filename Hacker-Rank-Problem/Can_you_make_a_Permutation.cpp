#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(),v.end());

        int count = 0;
        for (int i = 0; i < v.size(); i++)
        {  
            if(v[i] > n)
            {
                count++;
            }
            else if(v[i] < 1)
            {
                count++;
            }
            else if( i > 0 && v[i] == v[i-1])
            {
                count++;
            }
       }
        if(count <= k)
        {
            cout <<"YES"<<"\n";
        }
        else cout <<"NO"<<"\n";
    
    }

    return 0;
}