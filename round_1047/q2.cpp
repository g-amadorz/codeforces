#include "iostream"
using namespace std;
void solve() {
  int n;
  vector<int> arr, res;
  cin >> n;
  while (n--) {
    int p;
    cin >> p;
    arr.push_back(p);
  }

  for (int i : arr) {
    for (int j : arr) {
      if ((i + j) % 3 == 0) {
        res.push_back(j);
        continue;
      }
    }
  }

  for (int o : res) {
    cout << o << " ";
  }
  cout << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
