#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b; cin >> a >> b;
    int total = a+b;
    if(total % 2 == 1)
    {
        cout << -1 << endl;
    }
    else{
        int n = total/2;
        cout << n - b << endl;
    }
    return 0;
}