#include <bits/stdc++.h>
using namespace std;

int sum_upto_n(int n) {
    int sum = n*(n+1)/2;
    return sum;
}

int main(void) {
    int row = 1;
    int sum = 0;
    int cubes;
    int height = 0;
    cin >> cubes ;
    while(sum + sum_upto_n(row) <= cubes) {
        sum += sum_upto_n(row); 
        row ++;
        height ++;
    }
    cout << height << endl;
    return 0;
}