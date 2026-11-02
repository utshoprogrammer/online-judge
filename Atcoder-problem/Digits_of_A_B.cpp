#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  s,t; cin >> s >> t;
    int ans = s+t;
    if(ans /10 == 0)
    {
        cout << 1 << endl;
    }
    else{
        cout << 2 << endl;
    }
    return 0;
}