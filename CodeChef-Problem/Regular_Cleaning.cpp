#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    if(n%2 == 0)
    {
        cout << 10 << endl;
    }
    else{
        cout << n - (n%2) << endl;
    }
    //if()
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n; cin >> n;
//     if(n < 10)
//     {
//         cout << 10 - n << endl;
//     }
//     else if(n >= 10 && n < 20)
//     {
//         cout << 20 - n << endl;
//     }
//     else if(n >= 20 && n < 30)
//     {
//         cout << 30 - n << endl;
//     }
//     else if(n >= 30 && n < 40)
//     {
//         cout << 40 - n << endl;
//     }
//     else if(n >= 40 && n < 50)
//     {
//         cout << 50 - n << endl;
//     }
//     else if(n >= 50 && n < 60)
//     {
//         cout << 60 - n << endl;
//     }
//     else if(n >= 60 && n < 70)
//     {
//         cout << 70 - n << endl;
//     }
//     else if(n >= 70 && n < 80)
//     {
//         cout << 80 - n << endl;
//     }
//     else if(n >= 80 && n < 90)
//     {
//         cout << 90 - n << endl;
//     }
//     else if(n >= 90 && n < 100)
//     {
//         cout << 100 - n << endl;
//     }
//     else{
//         cout << 10 << endl;
//     }
//     return 0;
// }