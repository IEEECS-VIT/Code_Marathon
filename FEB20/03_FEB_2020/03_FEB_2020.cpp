// Author- Lakhan Nad
#include <bits/stdc++.h>

using namespace std;

vector<string> weightedUniformStrings(string s, vector<int> queries) {
  vector<string> result;
  int arr[26] = {0};
  char c;
  int count;
  for (int i = 0; i < s.length(); i++) {
    c = s[i];
    count = 0;
    while (i < s.length() && s[i] == c) {
      count++;
      i++;
    }
    if (arr[c - 'a'] < count) {
      arr[c - 'a'] = count;
    }
    i--;
  }
  bool present;
  for (int i = 0; i < queries.size(); i++) {
    present = false;
    for (int j = 1; j < 27; j++) {
      if (queries[i] % j == 0 && arr[j - 1] * j >= queries[i]) {
        present = true;
        break;
      }
    }
    if (present) {
      result.push_back("Yes");
    } else {
      result.push_back("No");
    }
  }
  return result;
}

int main() {
  ofstream fout(getenv("OUTPUT_PATH"));
  string s;
  getline(cin, s);
  int queries_count;
  cin >> queries_count;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  vector<int> queries(queries_count);
  for (int i = 0; i < queries_count; i++) {
    int queries_item;
    cin >> queries_item;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    queries[i] = queries_item;
  }
  vector<string> result = weightedUniformStrings(s, queries);
  for (int i = 0; i < result.size(); i++) {
    fout << result[i];

    if (i != result.size() - 1) {
      fout << "\n";
    }
  }
  fout << "\n";
  fout.close();
  return 0;
}