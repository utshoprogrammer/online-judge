#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l ,r;
    cin >> l >> r;
    int flag = 0;
    for(int i = l; i <= r; i++)
    {
        if(i % 2 == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        cout << "Yes" << endl;
    }
    else{
        cout <<"No" << endl;
    }
    return 0;
}