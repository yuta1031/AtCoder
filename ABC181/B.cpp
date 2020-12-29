#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  ll N,A,B;
  cin >> N;
  ll ans = 0;
  rep(i,N){
    cin >> A >> B;
    ans += (A-B+1)*(A+B)/2;
  }
  cout << ans;
}