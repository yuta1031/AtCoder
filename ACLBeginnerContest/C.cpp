#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
using namespace atcoder;

int main() {
  int N,M;
  cin >> N >> M;

  dsu d(N);
  for (int i = 0; i < M; i++) {
	int a, b;
    cin >> a >> b;
    --a; --b;
    d.merge(a,b);
  }
  
  int size = (int)d.groups().size();
  if (size == 1) {
    cout << 0;
  } else if (size == 0) {
    printf("%u",N-1);
  } else {
    printf("%u",size-1);
  }
}