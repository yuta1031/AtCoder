#include <bits/stdc++.h>
#include <unordered_set> // 重複排除した集合
using namespace std;
#define ll long long
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_indexed(i, m, n) for (int i = (int)(m); i < (int)(n); i++)

// atcodeメモ
// 図にして問題の意図を把握、greedyでいけなさそうなら範囲を絞る
// 擬似コードで全体の分量を見積もる、greedyで多すぎるなら最適化を考える
// 標準関数の利用を考える
// 既知の方法の利用、応用(kotlinやGoでやったことあるか考える)

// 各桁の和
// 使うときはmainより先に宣言する
int digit_sum(int n) {
  if(n < 10) return n;
  return digit_sum(n/10) + n%10;
}

// 最大公約数
int gcd(int a, int b){
	if(b == 0) return a;
	return gcd(b, a % b);
}

int lcm(int a, int b){
	return a * b  / gcd(a,b);
}

// n!
__int128 fact(int n) {
  __int128 fact = 1;
  rep_indexed(i,1,n+1){
    fact*=i;
  }
  return fact;
}

int main() {
	cout << "----------------------------start";

	// 変数定義
	int I;
	ll L; // 桁数が大きいときにはlong long
	string S;

	// 標準入力
	cin >> I;
	scanf("%d", S); //decimal int
	scanf("%s", S); //string
	scanf("%f", L); //float
	scanf("%.10f", L); //有効数字10桁float

	// 標準出力(改行付き)
	cout << I << endl;
	printf("%d", S); //decimal int
	printf("%s", S); //string
	printf("%f", L); //float
	printf("%.10f", L); //有効数字10桁float

	// マクロループ利用
	rep(i, I){
		cout << "Hello World." << endl;
	}

}
