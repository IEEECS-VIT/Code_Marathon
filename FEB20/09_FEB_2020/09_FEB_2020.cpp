// Author- Lakhan Nad
// While calculating Mod 10^9 + 7 so that all test cases would pass.
#include <iostream>
#include <stack>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long int n;
    cin >> n;
    long long int arr[n];
    long long int back[n];
    long long int front[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    stack<long long int> s;
    for (long long int i = 0; i < n; i++) {
      while (!s.empty() && arr[s.top()] < arr[i]) {
        s.pop();
      }
      if (s.empty()) {
        back[i] = i - 0;
      } else {
        back[i] = i - s.top();
      }
      s.push(i);
    }
    while (!s.empty()) {
      s.pop();
    }
    for (long long int i = n - 1; i >= 0; i--) {
      while (!s.empty() && arr[s.top()] < arr[i]) {
        s.pop();
      }
      if (s.empty()) {
        front[i] = n - 1 - i;
      } else {
        front[i] = s.top() - i;
      }
      s.push(i);
    }
    while (!s.empty()) {
      s.pop();
    }
    long long int max = -1;
    long long int index = -1;
    long long int sight;
    for (long long int i = 0; i < n; i++) {
      sight = ((front[i] + back[i]) * (i + 1)) % 1000000007;
      if (max < sight) {
        max = sight;
        index = i + 1;
      }
    }
    cout << index << endl;
  }
  return 0;
}