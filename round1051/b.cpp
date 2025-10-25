#include "iostream"
#include <vector>
using namespace std;

void solve() {
  int n, k;

  cin >> n >> k;

  vector<int> a(n);
  vector<int> b(n);

  for (auto &i : a) {
    cin >> i;
  }

  for (auto &i : b) {
    cin >> i;
  }
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
