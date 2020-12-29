#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  vector<int> A(4);

  rep(i,4) {
    cin >> A.at(i);
  }
  cout << *min_element(A.begin(), A.end());
}