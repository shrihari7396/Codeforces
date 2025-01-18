#include <bits/stdc++.h>

using namespace std;

string u_to_l (string s) {
    int n = s.size();
    for(int i = 0; i < n; i++) {
        if(s[i] == 'A' || s[i] == 'a' || s[i] == 'I' || s[i] == 'i' || s[i] == 'o' || s[i] == 'O' || s[i] == 'E' || s[i] == 'e' || s[i] == 'u' || s[i] == 'U' || s[i] == 'Y' || s[i] == 'y') {
            s.erase(i, 1);
            n--;
        }
    }
    return s;
}

int main(void) {
    string s;
    cin >> s;
    string ans = u_to_l(s);
    int n = ans.size();
    for(int i = 0; i < n; i++) {
        cout << "." << char(tolower(ans[i]));
    }
    return 0;
}


