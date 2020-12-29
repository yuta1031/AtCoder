#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  ll X,Y,A,B,power,exp;
  cin >> X >> Y >> A >> B;
  // カコモン
  // 強さ*A 経験値 +1
  // atcode
  // 強さ+B 経験値 +1
  // Ax = x+b
  // x(A-1) = b
  // x = b/(A-1)

  power = X;
  while(power<Y) {
    if(power*A > power+B) {
      power*= A;
    } else {
      power += B;
    }
    exp++;
  }
  cout << exp;
}