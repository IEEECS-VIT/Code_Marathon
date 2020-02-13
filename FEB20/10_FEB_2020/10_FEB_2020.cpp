#include <iostream>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int arra[n];
  int arrb[k];
  for (int i = 0; i < n; i++) {
    cin >> arra[i];
  }
  for (int i = 0; i < k; i++) {
    cin >> arrb[i];
  }
  cout << "Yes";
  return 0;
}