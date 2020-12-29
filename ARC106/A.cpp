#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define ll long long
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  ll N;
  cin >> N;
  for(int i = 0; i < 37;i++){
    for(int j = 0; j <25;j++) {
        if(pow(3,i)+pow(5,j)==N){
          cout << i << " " << j;
          return 0;
        }
    }
  }
  cout << -1 << endl;
  return 0;
}