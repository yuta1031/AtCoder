#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  ll N;
  cin >> N;
  vector<vector<ll> > point(N, vector<ll>(2));
  //vector<long double> gradient(100);

  rep(i,N) {
    cin >> point.at(i).at(0) >> point.at(i).at(1);
  }


  // rep(i,N) {
  //   cout << point.at(i).at(0) << " " << point.at(i).at(1) << endl;
  // }

  for (int i=0;i<N;i++) {
    for (int j=0;j<N;j++) {
      for (int k=0;k<N;k++) {
        if(i==j||j==k||i==k){
          continue;
        }
        // cout << point.at(i).at(0) - point.at(j).at(0) << point.at(k).at(0);
        ll x1diff = point.at(i).at(0) - point.at(j).at(0);
        ll x2diff = point.at(i).at(0) - point.at(k).at(0);
        ll y1diff = point.at(i).at(1) - point.at(j).at(1);
        ll y2diff = point.at(i).at(1) - point.at(k).at(1);

        // cout << x1diff << endl << x2diff << endl;
        // double g1,g2;
        // if(x1diff == 0){
        //   g1 = 0;
        // } else {
        //   g1 = (point.at(i).at(1)-point.at(j).at(1))/(point.at(i).at(0) - point.at(j).at(0));
        // }
        // if(x2diff == 0){
        //   g2 = 0;
        // } else {
        //   g2 = (point.at(i).at(1)-point.at(k).at(1))/(point.at(i).at(0) - point.at(k).at(0));
        // }
        // cout << g1 << " " << g2 << endl;
        if(x1diff*y1diff == x2diff*y2diff) {
          cout << "Yes";
          return 0;
        }
      }
      // if(point.at(i).at(0) == point.at(j).at(0)) {
      //   gradient.push_back(0);
      // }
      // double g = (point.at(i).at(1)-point.at(j).at(1))/(point.at(i).at(0) - point.at(j).at(0));
      // cout << g;
      // gradient.push_back(g);
    }
    cout << "No";
    //cout << point.at(i).at(0) << endl << point.at(i).at(1) << endl;
  }

}