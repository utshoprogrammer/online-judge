#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin >> s;
    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        if(i == 0)
        {
            ans += s[i];
        }
        else if(i == 2)
        {
            ans += s[i];
        }
        else if(i==4)
        {
            ans+= s[i];
        }
    }
    cout << ans << endl;
    
    return 0;
}