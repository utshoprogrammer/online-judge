#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int total_slide = 600 / 30;
    int chef_need_slide = total_slide - n;
    cout << chef_need_slide << endl;
    return 0;
}