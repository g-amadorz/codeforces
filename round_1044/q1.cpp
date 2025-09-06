#include "iostream"
#include <set>
#include <vector>
using namespace std;
void solve() {
  int n;
  cin >> n;

  vector<int> a(n);

  for (auto &_ : a)
    cin >> _;

  set<int> check;

  for (auto i : a) {
    if (check.count(i)) {
      cout << "YES" << endl;
      return;
    }

    check.insert(i);
  }

  cout << "NO" << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
