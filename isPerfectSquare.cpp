# -*- mode: snippet -*-
# name:IsPerfectSquare
# key: <isPS
# --
bool isPS(int num) {
    if (num < 0) return false; // Negative numbers can't be perfect squares
    if (num == 0 || num == 1) return true;

    // Compute integer square root using bitwise approach (Newton's method)
    int x = num;
    int y = (x + 1) >> 1; // Equivalent to (x + 1) / 2, ensuring integer division

    while (y < x) {
        x = y;
        y = (x + num / x) >> 1; // (x + num / x) / 2 using bitwise shift
    }

    return x * x == num;
} 
