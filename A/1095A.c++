#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int size;
    vector<char>s(size);
    cin >> size;
    for(int i = 0; i < size; i++) {
        char temp;
        cin >> temp;
        s[i] = temp;
    }
    vector<char> element;
    for(int i = 1; i < size; i++) {
        if(s[i] != s[i - 1]) 
        element.emplace_back(s[i-1]);
    }
    string ans = "";
    int size1 = element.size();
    for(int i = 0; i < size1; i++) {
        ans += element[i];
    }
    cout << ans << endl;
    return 0;
}