#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[5];
        for (int i = 0; i < 5; i++)
        {
            cin >> a[i];
        }
        int count_thirty_plus = 0;
        int count_sixty_plus = 0;

        for (int i = 0; i < 5; i++)
        {
            if (a[i] >= 30)
                count_thirty_plus++;
            if (a[i] >= 60)
                count_sixty_plus++;
        }

        if (count_thirty_plus >= 4 && count_sixty_plus >= 2)
        {
            cout << "Pass" << endl;
        }
        else
        {
            cout << "Fail" << endl;
        }
    }
    return 0;
}