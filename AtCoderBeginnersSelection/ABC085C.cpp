#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  long long Y;
  cin >> N >> Y;
  int right = 10000*N-Y;
  for (int i = 0; i <=N;i++) {
    for (int j = 0; j <=N-i;j++){
      if (5000*i+9000*j == right) {
        cout << N-i-j  << " " << i << " " << j;
        return 0;
      }
    }
  }
  cout << -1 << " " << -1 << " " << -1;
}