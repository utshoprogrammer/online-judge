#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    int minimum_num = min(a,b);
    int maximum_square = minimum_num*minimum_num;
    cout << maximum_square << endl;
    return 0;
}