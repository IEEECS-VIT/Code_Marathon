/* Author- Lakhan Nad */
#include <iostream>

using namespace std;

#define MOD 1000000007

int main() {
  int n = 100001;
  long long int arr[n];
  arr[1] = 1;
  for (int i = 2; i <= n; i++) {
    arr[i - 1] = (arr[i - 2] * i) % MOD;
  }
  int t;
  cin >> t;
  int x;
  while (t--) {
    cin >> x;
    cout << arr[x - 1] << endl;
  }
  return 0;
}