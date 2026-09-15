#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        queue<string> q;
        int i = 0;
        for (int i = 0; i < n; i++)
        {
            if(i != n-1 && k == 0)
            {
                q.push("0");  
            }
            else if (v[i] <= k)
            {
                q.push("1");
                k = k - v[i];
            }
            else 
                q.push("0");
            
        }
        while (!q.empty())
        {
            cout << q.front();
            q.pop();
        }
        cout << endl;
    }

    return 0;
}