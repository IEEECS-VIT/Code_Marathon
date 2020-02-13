#include <iostream>
#include <string>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    int len;
    cin >> s;
    len = s.length();
    string res;
    int greater = 0;
    for (int i = 0; i < len / 2 + len % 2; i++) {
      res.push_back(s[i]);
    }
    for (int i = len / 2 + len % 2; i < len; i++) {
      res.push_back(s[len - i - 1]);
    }
    if (res > s) {
      cout << res << endl;
    } else {
      for (int i = (len - 1) / 2; i >= 0; i--) {
        if (res[i] == '9') {
          res[i] = '0';
        } else {
          res[i]++;
          break;
        }
      }
      for (int i = len / 2; i < len; i++) {
        res[i] = res[len - i - 1];
      }
      if (res[0] == '0') {
        res[0] = '1';
        res.push_back('1');
      }
      cout << res << endl;
    }
  }
  return 0;
}
