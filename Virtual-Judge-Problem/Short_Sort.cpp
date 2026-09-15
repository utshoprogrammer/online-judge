#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string temp = "abc";
        if (s == temp)
        {
            cout << "YES" << endl;
        }
        else if(s[0] == 'a')
        {
            if(s[1] == 'b')
            {
                cout <<"YES" << endl;
            }
            else{
                cout <<"YES" << endl;
            }
        }
        else if(s[1] == 'b')
        {
            if(s[2] == 'c')
            {
                cout <<"YES" << endl;
            }
            else{
                cout <<"YES" << endl;
            }
        }
        else if(s[2] == 'c')
        {
            if(s[1] == 'b')
            {
                cout <<"YES" << endl;
            }
            else{
                cout <<"YES" << endl;
            }
        }
        else if(s[0] == 'b' && s[1] == 'c')
        {
            cout <<"NO" << endl;
        }
        else if(s[0] == 'c' && s[1] == 'a')
        {
            cout <<"NO" << endl;
        }
        
    }

    return 0;
}