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
        int count = 0;
        int cur = v[0];
        for (int i = 1; i < v.size(); i++)
        {
            if(v[i] > cur)
            {
                count += (v[i] - cur);
            }
            else{
                continue;
            }
        }
        cout << count << endl;     
    } 
    return 0;
}