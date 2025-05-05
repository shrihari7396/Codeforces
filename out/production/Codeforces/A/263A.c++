#include <bits/stdc++.h>
using namespace std;

int main(void)  {
    int final_i = 0;
    int final_j = 0;
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= 5; j ++) {
            int temp;
            cin >> temp;
            if(temp == 1) {
                final_i = i;
                final_j = j;
            }
        }
    }

    int distance = abs(final_i-3) + abs(final_j - 3);
    
    cout << distance << endl; 

    return 0;
}