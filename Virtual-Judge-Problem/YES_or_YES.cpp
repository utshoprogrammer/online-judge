#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        if(s == "yES" || s == "yes"|| s == "YEs" || s == "YeS" ||s == "yEs"|| s == "yeS" || s == "Yes"|| s == "YES")
        {
            cout <<"YES" << endl;
        }
        else{
            cout <<"NO" << endl;
        }
    }
    
    return 0;
}