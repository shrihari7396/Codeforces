#include <iostream>
using namespace std;

int transform_count(int n, int m) {
    // If m is not divisible by n, transformation is impossible
    if (m % n != 0) {
        return -1;
    }

    // Calculate the ratio r = m / n
    int ratio = m / n;
    int count_2 = 0;
    int count_3 = 0;

    // Factor out all 2s from ratio
    while (ratio % 2 == 0) {
        ratio /= 2;
        count_2++;
    }

    // Factor out all 3s from ratio
    while (ratio % 3 == 0) {
        ratio /= 3;
        count_3++;
    }

    // If there's any other prime factor left in ratio, return -1
    if (ratio != 1) {
        return -1;
    }

    // The total number of moves is the sum of count_2 and count_3
    return count_2 + count_3;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << transform_count(n, m) << endl;
    return 0;
}
