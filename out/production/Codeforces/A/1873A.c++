// Hightly optimal
/*
#include <iostream>
#include <vector>

int main(){

    const int B = 10;
    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::vector<std::string> m(B);
        for(long p = 0; p < B; p++){std::cin >> m[p];}

        long total(0);
        for(long row = 0; row < B; row++){
            for(long col = 0; col < B; col++){
                if(m[row][col] == '.'){continue;}
                long xrow = (row < B - 1 - row) ? row : (B - 1 - row);
                long xcol = (col < B - 1 - col) ? col : (B - 1 - col);
                long score = 1 + (xrow < xcol ? xrow : xcol);
                total += score;
            }
        }
        
        printf("%ld\n", total);
    }

}*/


// MY BruteForce
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while(t--) {
        char arr[10][10];
        for(int i = 0; i < 10; i++) {
            for(int j = 0; j < 10; j++) {
                cin >> arr[i][j];
            }
        }

        int ans = 0;
        int left = 0, right = 9, top = 0, bot = 9;
        
        int counts[6] = {0};
        int cnt = 1;
        
        while (top <= bot && left <= right) {
            for(int i = left; i <= right; i++) {
                if(arr[top][i] == 'X') counts[cnt]++;
            }
            top++;

            for(int i = top; i <= bot; i++) {
                if(arr[i][right] == 'X') counts[cnt]++;
            }
            right--;
   
            for(int i = right; i >= left; i--) {
                if(arr[bot][i] == 'X') counts[cnt]++;
            }
            bot--;
            
            for(int i = bot; i >= top; i--) {
                if(arr[i][left] == 'X') counts[cnt]++;
            }
            left++;

            cnt ++;
        }

       for(int i = 1; i <= 5; i++) {
            ans += counts[i] * i;
        }
        cout << ans << endl;
    }
    return 0;
}
