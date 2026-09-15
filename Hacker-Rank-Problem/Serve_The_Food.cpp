#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    queue<int> qu;
    while (q--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            long long int x;
            cin >> x;
            qu.push(x);
        }
        else
        {
            if(!qu.empty())
            {
                cout << qu.front() << endl;
                qu.pop();
            }
            else 
            {
                cout << "-1" << endl;
            }
        }
    }
    return 0;
}