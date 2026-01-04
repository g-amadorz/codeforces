#include "iostream"
#include <algorithm>
#include <array>
#include <vector>
using namespace std;
void solve() {
  int n;

  cin >> n;

  vector<int> v(n);

  array<bool, 2> present = {false, false};
  for (auto &i : v) {
    cin >> i;
    present[i & 1] = true;
  }

  if (present[0] && present[1]) {
    sort(v.begin(), v.end());
  }

  for (auto i : v) {
    cout << i << ' ';
  }
  cout << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
