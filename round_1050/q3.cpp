#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
#define ll long long
void solve() {
  int n;
  cin >> n;
  vector<ll> even;
  vector<ll> odds;

  for (int i = 0; i < n; i++) {
    int k;
    cin >> k;
    if (k % 2) {
      odds.push_back(k);
    } else {
      even.push_back(k);
    }
  }

  long long res = 0;

  if (!odds.empty()) {
    for (auto j : even) {
      res += j;
    }
  }

  sort(odds.begin(), odds.end());

  int r = ceil(odds.size() / 2);

  for (int f = r; f < odds.size(); f++) {
    res += odds[f];
  }

  cout << res << endl;
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
