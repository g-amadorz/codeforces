#include "iostream"
#include <bits/stdc++.h>
#include <vector>
using namespace std;

const int N = 2e5 + 10;
vector<vector<int>> pfac(N + 1);

void solve() {
  int n;

  cin >> n;

  vector<int> a(n);
  vector<int> b(n);

  for (auto &i : a)
    cin >> i;

  for (auto &k : b)
    cin >> k;

  map<int, int> count;

  for (int i = 0; i < n; i++) {
    for (int k : pfac[a[i]]) {
      if (count[k]) {
        return void(cout << 0 << '\n');
      }
      count[k]++;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int k : pfac[a[i] + 1]) {
      if (count[k]) {
        return void(cout << 1 << '\n');
      }
    }
  }
  cout << 2 << '\n';
}
int main() {
  int t;
  cin >> t;

  //  Prime factors
  for (int i = 2; i <= N; i++) {
    if (!pfac[i].empty())
      continue;

    for (int j = i; j <= N; j += i) {
      pfac[j].push_back(i);
    }
  }

  while (t--) {
    solve();
  }
}
