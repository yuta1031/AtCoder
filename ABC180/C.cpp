#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define ll long long

int main(){
  ll N;
  cin >> N;
  vector<ll> ans;
  for(int i=1;i<=sqrt(N);i++) {
    if(N%i == 0) {
      ans.push_back(i);
    }
    if(N/i != i) {
      ans.push_back(N/i);
    }
  }

  sort(ans.begin(),ans.end());

  for (int i = 0;i<ans.size();i++) {
    cout << ans.at(i) << endl;
  }
}