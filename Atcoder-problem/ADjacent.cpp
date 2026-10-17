#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s,t; cin >> s >> t;
    int flag = 0;
    for(int i = 0;i < (int)s.size();i++)
    {
        if((s[i] == 'A' && t[i] == 'D')||( s[i] == 'D' && t[i] == 'A' ))
        {
            flag = 1;
            break;
        }
        else if(s[i] == s[i+1] || t[i] == t[i+1])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0) cout <<"No" << endl;
    else   cout << "Yes" << endl;
    return 0;
}