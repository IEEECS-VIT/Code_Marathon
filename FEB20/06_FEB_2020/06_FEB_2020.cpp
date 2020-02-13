// Author- Lakhan Nad
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int temp;
  int goodarr[n + 1];
  goodarr[0] = 0;
  int cnt1 = 0;
  int cnt0 = 0;
  for (int i = 1; i <= n; i++) {
    cin >> temp;
    if (temp == 1) {
      cnt1++;
    } else {
      cnt0++;
    }
    goodarr[i] = cnt1 - cnt0;
  }
  int max = 0;
  int length = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j <= n; j++) {
      if (max < goodarr[j] - goodarr[i]) {
        max = goodarr[j] - goodarr[i];
        length = j - i;
      } else if (max == goodarr[j] - goodarr[i]) {
        if (length < j - i) {
          length = j - i;
        }
      }
    }
  }
  cout << length << endl;
  return 0;
}