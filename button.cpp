#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int  n;
        cin >> n;
        int head = 1;     
        int step = 1;     
        bool left = true;   

        while (n > 1) {
            if (left || n % 2 == 1)
                head += step;   

            n /= 2;             
            step *= 2;          
            left = !left;       
        }

        cout << head << "\n";
    }
    return 0;
}
