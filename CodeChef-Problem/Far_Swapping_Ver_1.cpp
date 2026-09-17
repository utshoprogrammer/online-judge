#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        //v.push_back(0);
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 1; j < n-1; j++)
        //     {
        //         if(abs(v[j] - v[j+1]) > 1 && v[j] > v[j+1])
        //         {
        //             swap(v[j],v[j+1]);
        //         }
        //     }   
        // } 

        int i = 0;
        while (i < n)
        {
            int j = i;
            int mn = v[i], mx = v[i];

            while (j < n)
            {
                mn = min(mn,v[j]);
                mx = max(mx,v[j]);

                if(mx - mn == j - i)
                {
                    sort(v.begin()+i,v.begin()+j+1);
                    i = j + 1;
                    break;
                }
                j++;
            }     
        }  
              
        for (auto val : v)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}