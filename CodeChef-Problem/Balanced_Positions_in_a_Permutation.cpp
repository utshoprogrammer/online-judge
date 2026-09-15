#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int count = 0;
        for (int pos = 0; pos < n; pos++)
        {
            // left small count 
            int left_small_count = 0;
            for (int i = 0; i < pos; i++)
            {
                if(v[i] < v[pos])
                {
                    left_small_count++;
                }
            }
            // right large count 
            int right_large_count = 0;
            for (int i = pos+1; i < n; i++)
            {
                if(v[i] > v[pos])
                    right_large_count++;
            }
            if(left_small_count == right_large_count)
            {
                count++;
            }    
        }
        cout << count << endl;
        
    }
    return 0;
}