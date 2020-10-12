#include <bits/stdc++.h>
using namespace std;

int main() {
  int A,B,C,D;
  cin >> A >> B >> C >> D;
  if (A == (B+C+D)) {
    cout << "Yes";
    return 0;
  }
  if (B == (A+C+D)) {
    cout << "Yes";
    return 0;
  }
  if (C == (A+B+D)) {
    cout << "Yes";
    return 0;
  }
  if (D == (A+B+C)) {
    cout << "Yes";
    return 0;
  }
  if ((A+B) == (C+D)) {
    cout << "Yes";
    return 0;
  }
  if ((A+C) == (B+D)) {
    cout << "Yes";
    return 0;
  }
  if ((B+C) == (A+D)) {
    cout << "Yes";
    return 0;
  }
  cout << "No";
}