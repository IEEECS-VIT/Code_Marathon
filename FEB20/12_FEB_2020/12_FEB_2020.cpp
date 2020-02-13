// Author- Lakhan Nad
#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
  int d = a > b ? a : b;
  int r = a + b - d;
  int temp;
  while (d % r) {
    temp = d % r;
    d = r;
    r = temp;
  }
  return r;
}

void calc_factors(int n, vector<int> &a) {
  if (n % 2 == 0) {
    a.push_back(2);
    while (n % 2 == 0) {
      n /= 2;
    }
  }
  for (int i = 3; i * i <= n; i += 2) {
    if (n % i == 0) {
      a.push_back(i);
      while (n % i == 0) {
        n /= i;
      }
    }
  }
  if (n > 2) {
    a.push_back(n);
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    int arr[n];
    vector<int> factors;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    int hcf = gcd(arr[0], arr[1]);
    for (int i = 2; i < n; i++) {
      hcf = gcd(hcf, arr[i]);
    }
    for (int i = 0; i < n; i++) {
      calc_factors(arr[i] / hcf, factors);
    }
    bool yes = true;
    for (int i = 0; i < factors.size(); i++) {
      if (x != factors[i] && y != factors[i] && z != factors[i]) {
        yes = false;
        break;
      }
    }
    if (yes) {
      cout << "She can" << endl;
    } else {
      cout << "She can't" << endl;
    }
  }
  return 0;
}