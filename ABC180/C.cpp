#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  
  vector<int> x;
  for(int i=0;i<N;i++) cin >> x[i];
  
  long ans1 = 0;
  for(int i=0;i<N;i++) ans1 += abs(x[i]);
  
  long ans2 = 0;
  for(int i=0;i<N;i++) ans2 += abs(x[i])*(long)abs(x[i]);
  
  int ans3 = 0;
  for(int i=0;i<N;i++) ans3 = max(ans3,x[i]);
    
  cout << ans1 << endl << printf("%.15f", sqrt(ans2)) << endl << ans3 << endl;
}