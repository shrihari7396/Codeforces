#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        vector<int> vec;
        for(int i = 0; i < size; i++) {
            cin >> vec[i];
        }
        for(int i = 0; i < size; i++) {
            if(vec[i-1] < vec[i] && vec[i] < vec[i+1]) {
                swap(vec[i], vec[i+1]);
            }
        }
        int count = -1;
        for(int i = 0; i  < size; i++) {
            if(vec[i] > vec[i+1]) {
                count = 1;
                break;
            }
        }
        if(count != -1) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }
    
    return 0;
}