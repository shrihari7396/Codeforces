#include <bits/stdc++.h>
using namespace std;

bool finding_year(int years) {
    int n = years;
    int count = 0;
    set <int> s;
    while(n > 0) {
        s.insert(n%10);
        n = n / 10;
        count ++;
    }
    return s.size() == count;
}

int main(void) {
    int year ;
    cin >> year ;
    int next_year = year + 1;
    while(!finding_year(next_year)) {
        next_year ++;
    }
    cout << next_year << endl; 
    return 0;
}