#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int k, n, w;
    cin >> k >> n >> w;
    int sum = (k*(w*(w+1)))/2;
    cout << max(0, sum - n) << endl;
    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
//     int k, n, w;
//     cin >> k >> n >> w;

//     // Calculate the total cost of w bananas
//     int total_cost = k * (w * (w + 1)) / 2;

//     // Calculate the amount to borrow
//     int borrow = total_cost - n;

//     // If borrow is less than or equal to 0, output 0, otherwise output borrow
//     cout << max(0, borrow) << endl;

//     return 0;
// }
