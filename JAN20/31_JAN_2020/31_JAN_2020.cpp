// Author: Mohit Hotwani
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        
        int n, m, q;
        cin >> n >> m >> q;
        
        int rows[n] = {0};
        int columns[m] = {0};
        long long int re = 0,ce = 0;
        int rowNumber, columnNumber;
        
        for (int a = 0; a < q; a++) {
            cin >> rowNumber >> columnNumber;
            rows[rowNumber - 1] = rows[rowNumber - 1] ^ 1;
            columns[columnNumber - 1] = columns[columnNumber - 1] ^ 1;
        }
        
        for (int x = 0; x < n; x++) {
            if (rows[x] == 0) {
                re++;
            }
        }
            
        for (int y = 0; y < m; y++) {
            if (columns[y] == 0) {
                ce++;
            }
        }
        
        long long int total = 0;
        total = re * (m - ce) + ce * (n - re);
        
        cout << total << "\n";
    }
    
    return 0;
}