//Author: Mohit Hotwani
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;
    cin >> n >> k;

    long long arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    long long min = 1000000007;

    for (int i = 0; i <= n - k; i++) {
        int temp = arr[i+k-1] - arr[i];
        if (temp < min) {
            min = temp;
        }
    }

    cout << min << endl;

    return 0;
}
