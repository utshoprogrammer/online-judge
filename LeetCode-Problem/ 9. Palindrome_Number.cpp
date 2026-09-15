#include<bits/stdc++.h>
using namespace std;

#include <stdbool.h>

bool isPalindrome(long long int x) {
    if (x < 0) return false;

    long long int original = x;
    long long int reversed = 0;

    while (x > 0) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }

    return original == reversed;
}