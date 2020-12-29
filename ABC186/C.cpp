#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  ll L,prod1,prod2;
  prod1 = 1;
  prod2 = 1;
  cin >> L;
  rep(i,11){
    prod1 *= L-1-i;
  }

  rep(j,11){
    prod2 *= j+1;
  }

  ll ans = prod1/prod2;
  printf("%llu", prod1/prod2);
}