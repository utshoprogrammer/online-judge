#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x,y; cin >> x >> y;
    if(x < y) cout << y -(x+1) << endl;
    else cout << x -(y+1) << endl;

    return 0;
}