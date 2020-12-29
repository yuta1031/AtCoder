#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  cout << fixed << setprecision(15);
  long double Sx,Sy,Gx,Gy;
  cin >> Sx >> Sy >> Gx >> Gy;
  long double ratio = Sy/(Gy+Sy);
  cout << Sx + (Gx-Sx) * (ratio);
}