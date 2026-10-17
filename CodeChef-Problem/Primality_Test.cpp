#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        if(n == 1) 
        {
            cout <<"no" << endl;
            continue;
        }
        bool flag = true;
        for(int i = 2;i < n;i++)
        {
            if(n%i == 0)
            {
                flag = false;
                break;
            }
        }
        if(flag) cout <<"yes" << endl;
        else cout <<"no" << endl;
    }

    return 0;
}