#include<bits/stdc++.h>
using namespace std;
# define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t; cin >> t;
    while (t--)
    {
         int n,k; cin >> n >> k;
         vector<int > v(n);
         for (int i = 0; i < n; i++)
         {
            cin >> v[i];
         }
        int cost = 300;
         for (int i = 0; i < n; i++)
         {
            for (int j = i+1; j < n; j++)
            {
                int l1 = i - k;
                int r1 = i+k;
                int l2 = j-k;
                int r2 = j+k;
                int cur_cost = v[i] + v[j];
                if(l1 <= 0 && r2 >= n-1 && l2 <= r1+1)
                {
                    cost = min(cost,cur_cost);
                }
            } 
         }
         if(cost == 300) cost = -1;
         cout << cost << endl;
         
         
    }

    return 0;
}