/* Author- Mohit Hotwani */
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string str1, str2;
  int o;
  cin >> str1 >> str2 >> o;

  int len1 = str1.length();
  int len2 = str2.length();

  int common = 0;

  for (int i = 0; i < min(len1, len2); i++) {
    if (str1[i] == str2[i]) {
      common++;
    } else {
      break;
    }
  }

  if ((len1 + len2 - 2 * common) > o) {
    cout << "No\n";
  }

  else if ((len1 + len2 - 2 * common) % 2 == o % 2) {
    cout << "Yes\n";
  }

  else if ((len1 + len2 - o) < 0) {
    cout << "Yes\n";
  }

  else {
    cout << "No\n";
  }

  return 0;
}