#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z; cin >> x >> y >> z;
    int total_run = x+z;
    int need_run_for_india = (total_run - y);
    if(total_run < y)
    {
        cout << 0 << endl;
    }
    else cout << need_run_for_india + 1 << endl;
    return 0;
}