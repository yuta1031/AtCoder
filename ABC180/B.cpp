#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long

int main() {
  ll N;
  cin >> N;
  vector<ll> x(N);
  rep(i, N) {
	  cin >> x.at(i);
  }

  // マンハッタン
  ll m_distance  = 0.0;
  rep(i, N) {
	  m_distance += abs(x.at(i));
  }
  cout << m_distance << endl;

  // ユークリッド
  ll u_distance  = 0.0;
  rep(i, N) {
	  u_distance += pow(abs(x.at(i)), 2);
  }
  
  cout << printf("%.15f",sqrt(u_distance)) << endl;

    // チェビシェフ
  ll c_distance  = 0.0;
  rep(i, N) {
	  c_distance = max(abs(x.at(i)), c_distance);
  }
  cout << c_distance;
}