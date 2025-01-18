#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int x,n;
        cin >> n >> x;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int maxi = max(arr[0], 2*(x - arr[n-1]));
        for(int i = 0; i < n-1; i++) {
            int temp = arr[i+1] - arr[i];
            maxi = max(maxi, temp);
        }
        cout << maxi << endl;
    }
}