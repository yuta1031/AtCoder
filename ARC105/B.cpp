#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, a, ans, l;
  cin >> N;
  for (int i = 0;i<N;i++){
    cin >> a;
    if(i==0) {
      l = a;
    }
    l = min(l, a);
    if(a%l == 0) {
      ans = l;
    } else {
      l = a%l;
    }
  }
  cout << ans;
}
