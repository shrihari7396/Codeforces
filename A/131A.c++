#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s;
    cin >> s;

    int size = s.size();
    bool is_true = true;

    // Check if all characters except the first one are uppercase
    for (int i = 1; i < size; i++) {
        if (islower(s[i])) {
            is_true = false;
            break;
        }
    }

    // If the condition is met, toggle the case
    if (is_true) {
        for (int i = 0; i < size; i++) {
            if (islower(s[i])) {
                s[i] = toupper(s[i]);
            } else {
                s[i] = tolower(s[i]);
            }
        }
    }
    
    cout << s << endl;
    return 0;
}
