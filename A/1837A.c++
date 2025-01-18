#include <iostream>
#include <vector>
using namespace std;

void grasshopper_on_a_line(int t, vector<pair<int, int>>& test_cases) {
    for (int i = 0; i < t; i++) {
        int x = test_cases[i].first;
        int k = test_cases[i].second;
        
        if (x % k != 0) {
            // Can reach x in one move
            cout << 1 << endl;
            cout << x << endl;
        } else {
            // Need two moves: first move 1, then move (x-1)
            cout << 2 << endl;
            cout << 1 << " " << x - 1 << endl;
        }
    }
}

int main() {
    int t;
    cin >> t;
    vector<pair<int, int>> test_cases(t);
    
    for (int i = 0; i < t; i++) {
        int x, k;
        cin >> x >> k;
        test_cases[i] = {x, k};
    }
    
    grasshopper_on_a_line(t, test_cases);
    
    return 0;
}
