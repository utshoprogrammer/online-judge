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
        int l;
        cin >> l;
        string s;
        cin >> s;
        int ans1 = 0;
        for (int i = 0; i <l; i++)
        {
            if(s[i] == 'R')
            {
                s[i] = 'L';
                ans1++;
            }
        }
        int ans2 = 0;
        for (int i = l; i < n; i++)
        {
            if(s[i] == 'L')
            {
                s[i] = 'R';
                ans2++;
            }
        }
        cout << min(ans1,ans2) << endl;  
        
    }
    return 0;
}
