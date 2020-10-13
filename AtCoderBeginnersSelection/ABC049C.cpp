#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  vector<string> list = {"eraser", "erase", "dreamer", "dream"};
  cin >> S;

  // 全探索 TLE
  bool end = true;

  while(0<S.size()) {
    for(auto str: list) {
      if (S.size()< str.size()) {
        continue;
      }
      if(S.substr(S.size()-str.size(), str.size()) == str){
        S.erase(S.size()-str.size());
        end = false;
        break;
      }
    }
    if(end) {
      cout << "No";
      return 0;
    }
  }

  cout << "Yes";
}