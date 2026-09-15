#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int min_num = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if(v[i] < min_num)
            {
                min_num = v[i];
            }
        }
        int ans = 1;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if(v[i] == min_num)
            {
                
            }

        }
        int total = ans * (min_num+1);
        cout << total << endl;
          
    }
    
    return 0;
}