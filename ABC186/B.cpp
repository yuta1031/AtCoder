#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  ll N,M,T,A,B,v,before;

  before = 0;
  cin >> N >> M >> T;
  v = N;
  rep(i, M) {
    cin >> A >> B;
    v -= (A-before);
    if(v<=0) {
      cout << "No";
      return 0;
    }
    // cout << v << endl;
    v += (B-A);
    if(N < v) {
      v = N;
    }
    before = B;
    // cout << v << endl;
  }

  v -=(T-before);
  // cout << v << endl;

  // if(N >= T+1) {
  //   cout << "Yes";
  //   return 0;
  // }
  // cout << sum << endl;
  // ll v = N - (T-1) + 2 * sum;
  // cout << v << endl;

  if(v>0) {
    cout << "Yes";
  } else {
    cout << "No";
  }
}