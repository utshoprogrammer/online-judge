#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int x,y,r; cin >> x >> y >> r;

        int a = x+r;
        int b = y;
        
        cout << a <<" " << b << endl;
    }  

    return 0;
}