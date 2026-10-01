#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    string s,t; cin >> s >> t;

    bool flag = true;
    for (int i = 0; i < s.size(); i++)
    {
        if(t[i] == '*')
        {
            t[i] = s[i];
        }
        else if(s[i] != t[i])
        {
            flag = false;
            break;
        }
    }
    if(flag == true) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    // int star_count = 0;
    // for (int i = 0; i < t.size(); i++)
    // {
    //     if(t[i] == '*')
    //     {
    //         star_count++;
    //     }
    // }
    // if(s == t)
    // {
    //     cout << "Yes" << endl;
    // }
    // else if(star_count > 0)
    // {
    //     cout << "Yes" << endl;
    // }
    // else
    // {
    //     cout <<"No" << endl;
    // }

    return 0;
}