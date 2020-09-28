#include <bits/stdc++.h>
using namespace std;

int main() {
  long long A, B, C, D;
  cin >> A >> B >> C >> D;
  if (A <= C) {
    if (C <= B) {
      cout << "Yes";
    } else {
      cout << "No";
    }
  } else {
    if (A <= D) {
      cout << "Yes";
    } else {
      cout << "No";
    }
  }
}