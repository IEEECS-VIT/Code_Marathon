#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        int n;
        cin >> n;
        
        if(n%2 == 0) {
            cout << n/2 + 1 << endl;
        }
        
        else {
            cout << (n+1)/2 << endl;
        }
    }
    
    return 0;
    
}