// Author- Lakhan Nad
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[2 * n + 2];
    int txor = 0;
    for (int i = 0; i < 2 * n + 2; i++) {
      cin >> arr[i];
      txor ^= arr[i];
    }
    int m = 1;
    while (!(txor & m)) {
      m *= 2;
    }
    int num1 = 0;
    for (int i = 0; i < 2 * n + 2; i++) {
      if ((arr[i] & m) == m) {
        num1 ^= arr[i];
      }
    }
    int num2 = txor ^ num1;
    if (num1 < num2) {
      cout << num1 << " " << num2 << endl;
    } else {
      cout << num2 << " " << num1 << endl;
    }
  }
  return 0;
}