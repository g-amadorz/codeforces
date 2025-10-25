#include "iostream"
#include <algorithm>
#include <vector>
using namespace std;
void solve() {
  int n;
  cin >> n;

  vector<int> a(n);

  for (auto &i : a) {
    cin >> i;
  }

  int l = 0;
  int r = a.size() - 1;

  for (int i = 1; i <= n; i++) {
    if (a[l] == i) {
      l++;
    } else if (a[r] == i) {
      r--;
    } else {
      return void(cout << "NO" << '\n');
    }
  }

  cout << "YES" << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
