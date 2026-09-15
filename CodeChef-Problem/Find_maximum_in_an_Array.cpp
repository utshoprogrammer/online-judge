#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int max_num = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if(v[i] > max_num)
            {
                max_num = v[i];
            }
        }
        cout<< max_num << endl;
              
    }
    
    return 0;
}