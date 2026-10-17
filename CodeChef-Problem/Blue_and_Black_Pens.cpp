#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b; cin >> a >> b;
    if(3*a <= a+b)
    {
        cout << 3*a << endl;
    }
    else{
        cout << a+b << endl;
    }

    return 0;
}