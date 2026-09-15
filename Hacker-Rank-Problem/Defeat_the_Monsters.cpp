#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        
        while (a != 0 && b != 0)
        {
            a = a - 1;
            b = b - 2;
        }
        if(b > 0 && c > 0)
        {
            while (b != 0 && c != 0)
            {
                b = b - 1;
                c = c - 3;
            }    
        }
        //cout << a << b << c << endl;
        if(a == 0 && b == 0 && c == 0)
        {
            cout << "Yes" << endl;
        }
        else 
        {
            cout << "No" << endl;
        }
        
    }
    return 0;
}