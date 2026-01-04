#include "iostream"
#include <vector>

using namespace std;
void solve() {
  int n, a;

  cin >> n >> a;

  vector<int> nums(n);

  for (auto &i : nums) {
    cin >> i;
  }

  int gt = 0;

  int lt = 0;

  for (int i = 0; i < n; i++) {
    if (nums[i] < a) {
      ++lt;
    }
    if (nums[i] > a) {
      ++gt;
    }
  }

  int b = lt < gt ? a + 1 : a - 1;

  cout << b << '\n';
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
