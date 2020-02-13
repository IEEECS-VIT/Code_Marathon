// Author- Lakhan Nad
#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int count = 0;
    int arr[n][n];
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cin >> arr[i][j];
        for (int i1 = 0; i1 <= i; i1++) {
          for (int j1 = 0; j1 <= j; j1++) {
            if (arr[i1][j1] > arr[i][j]) {
              count++;
            }
          }
        }
      }
    }
    cout << count << endl;
  }
  return 0;
}