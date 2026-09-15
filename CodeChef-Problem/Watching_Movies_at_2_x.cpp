#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y; cin >> x >> y;
    int one_x_watch = y/2;
    int two_x_watch = one_x_watch + (x - y);
    cout << two_x_watch << endl;
    return 0;
}