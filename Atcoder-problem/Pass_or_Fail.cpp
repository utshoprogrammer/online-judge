#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int n,x,p; cin >> n >> x >> p;
        int total = 4* x- n;
        if(total >= p)
        {
            cout << "PASS" << endl;
        }
        else{
            cout << "FAIL" << endl;
        }
    }
    

    return 0;
}