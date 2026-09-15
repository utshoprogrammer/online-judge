#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int l,r,k;
        cin >> l >> r >>k;
        int count = 0;
        for (int i = l; i <= r; i++)
        {
            if(gcd(i,k) == 1)
            {
                count++;
            }
        }
        cout << count << endl;
        
    }
    return 0;
}