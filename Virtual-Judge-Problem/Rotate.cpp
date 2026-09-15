#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n;
   
   int first_number = n/100;
   int number = n/10;
   int second_number = number%10;
   int third_number = n%10;
   
   int abc = first_number*100+second_number*10+third_number;
   
   int bca = second_number*100+third_number*10+first_number;

   int cab = third_number*100+first_number*10+second_number;

   int total = abc+bca+cab;

   cout << total << endl;

    return 0;
}