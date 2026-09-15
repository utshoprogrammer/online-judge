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
        else if(n+5%3 ==0)
        {
            cout << 2 << endl;
        }

    }
    
    return 0;
}