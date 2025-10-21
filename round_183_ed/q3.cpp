
#include "iostream"
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void solve() {
  int n;
  cin >> n;

  string s;

  cin >> s;

  int a = count(s.begin(), s.end(), 'a');
  int b = n - a;

  vector<int> vals;

  char g = a > b ? 'a' : 'b';

  int targ = abs(a - b);

  int l, r = 0;

  int res = 0;

  cout << -1 << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
