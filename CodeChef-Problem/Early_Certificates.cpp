#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        string s;
        cin >> s;
        string k;
        cin >> k;
        int small_len = min(n,m);
        for (int i = 0; i < small_len; i++)
        {
            if(s[i] == k[i]) 
            {
                cout << s[i];
            }
            else{
                break;
            }         
        }
        cout << endl;
    }
    return 0;
}