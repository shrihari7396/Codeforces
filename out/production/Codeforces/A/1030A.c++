#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    int count = 0;
    // check_easy_of_hard(n);
    while(n > 0) {
        int tmp ;
        cin >> tmp;
        if(tmp == 1) {
            count ++;
        }
        n--;
    }
    if(count >= 1) {
        cout << "HARD" << endl;
    }else{
        cout << "EASY" << endl;
    }
    return 0;
}