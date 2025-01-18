#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(void) {

    string s;
    cin >> s;
    for(auto& it : s) {
        if(it > '4') {
            it = '9' - it + '0';
        }
    }
    if(s.front() == '0') {
        s.front() = '9';
    }
    cout << s << endl;
    return 0;
}


// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string x;
//     cin >> x;

//     for (auto& digit : x)
//     {
//         if (digit > '4')
//             digit = '9' - digit + '0';
//     }

//     if (x.front() == '0')
//         x.front() = '9';
//     cout << x << endl;
//     return 0;
// }
