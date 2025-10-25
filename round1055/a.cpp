#include "iostream"
#include <set>
using namespace std;
void solve() {
  int n;
  cin >> n;

  set<int> a;

  while (n--) {
    int k;
    cin >> k;
    a.insert(k);
  }

  cout << 2 * a.size() - 1 << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
