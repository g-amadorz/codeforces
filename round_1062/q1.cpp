#include "iostream"
#include <algorithm>
#include <vector>
using namespace std;
void solve() {
  int n;

  cin >> n;

  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    int k;
    cin >> k;
    a[i] = k;
  }

  cout << *max_element(a.begin(), a.end()) << endl;
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
