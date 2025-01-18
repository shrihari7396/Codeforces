#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int x = 0;
    while(t > 0) {
        string s;
        cin >> s;
        if(s == "++X" || s == "X++") {
            x = x + 1;
        }
        if(s == "--X" || s == "X--") {
            x = x - 1;
        }
        t--;
    }
    cout << x << endl;
    return 0;
}