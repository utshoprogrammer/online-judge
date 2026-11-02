#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t; cin >> t;
    while (t--)
    {
        string s; cin >> s ;
        char d ; cin >> d;

        int pos = 1e9;
        for(int i = 0;i < s.size();i++)
        {
            if(s[i] == d)
            {
                pos = i;
                break;
            }
        }
        if(pos == (int)1e9)
        {
            cout << s << endl;
            continue;
        }
        if(d != '9')
        {
            s[pos]++;
            for (int i = pos+1; i < s.size(); i++)
            {
                if(d != '0') s[i] = '0';
                else s[i] = '1';
            }       
        }
        else{
            for (int i = pos+1; i < s.size(); i++)
            {
                s[i] = '0';
                
            }
            s[pos] = '0';
            pos--;
            while (pos >= 0 && s[pos] == '8')
            {
                s[pos] = '0';
                pos--;
            }
            if(pos >= 0 ) s[pos]++;
            else{
                s = '1' + s;
            }
        }
        cout << s << endl;
    }

    return 0;
}