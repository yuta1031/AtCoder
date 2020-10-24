#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
  int N;
  int maximum = 0;
  int sum1 = 0;
  __float128 sum2 = 0;
  
  cin >> N;
  
  for(int i = 0; i < N;i++) {
    int x;
    cin >> x;
    sum1+=fabs(x);
    sum2+=pow(abs(x),2);
    maximum = max(maximum,abs(x));
  }
	
  cout << sum1 << endl << sqrt(sum2) << endl << maximum << endl;
  return 0;
}