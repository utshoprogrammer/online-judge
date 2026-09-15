#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y; cin >> x >> y;
    int n = abs(x-y);
    if(n > 2)
    {
        cout <<"Boring" << endl;
    }
    else{
        cout <<"Interesting" << endl;
    }
    return 0;
}