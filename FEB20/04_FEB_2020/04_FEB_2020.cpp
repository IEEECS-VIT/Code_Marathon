// Author- Lakhan Nad
#include <bits/stdc++.h>

using namespace std;

int palindromeIndex(string s) {
  int index = -1;
  int len = s.length();
  for (int i = 0; i < len / 2; i++) {
    if (s[i] != s[len - 1 - i]) {
      index = i;
      break;
    }
  }
  if (index == -1) {
    return -1;
  } else {
    string s2;
    for (int i = index + 1; i <= len - index - 1; i++) {
      s2.push_back(s[i]);
    }
    string s3 = s2;
    reverse(s3.begin(), s3.end());
    if (s3 == s2) {
      return index;
    } else {
      s2 = s[index] + s2;
      s2.pop_back();
      s3 = s2;
      reverse(s3.begin(), s3.end());
      if (s3 == s2) {
        return (len - index - 1);
      } else {
        return -1;
      }
    }
  }
}

int main() {
  ofstream fout(getenv("OUTPUT_PATH"));
  int q;
  cin >> q;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  for (int q_itr = 0; q_itr < q; q_itr++) {
    string s;
    getline(cin, s);
    int result = palindromeIndex(s);
    fout << result << "\n";
  }
  fout.close();
  return 0;
}