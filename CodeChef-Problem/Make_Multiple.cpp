#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if(n%3==0)
        {
            cout << 0 << endl;
        }
        else if((n+1) % 3 == 0)
        {
            cout<< 1 << endl;
        }
        else 
        {
            int next = n/5 * 5 + 5;
            if(next % 3 == 0) cout << 1 << endl;
            else cout << 2 << endl;
        }

    }
    
    return 0;
}