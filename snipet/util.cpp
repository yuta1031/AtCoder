#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// 最大公約数
int gcd(int a, int b){
	if(a%b == 0) return b;
	else return gcd(b, a%b);
}

// 最小公倍数
int lcm(int a, int b){
	return a * b / gcd(a, b);
}

int main() {
	// // 変数定義
	// int I;
	// ll L; // 桁数が大きいときにはlong long
	// string S;

	// // 標準入力
	// cin >> I;
	// scanf("%d", S); //decimal int
	// scanf("%s", S); //string
	// scanf("%f", L); //float
	// scanf("%.10f", L); //有効数字10桁float

	// // 標準出力(改行付き)
	// cout << I << endl;
	// printf("%d", S); //decimal int
	// printf("%s", S); //string
	// printf("%f", L); //float
	// printf("%.10f", L); //有効数字10桁float

	// // マクロループ利用
	// rep(i, I){
	// 	cout << "Hello World." << endl;
	// }

	cout << lcm(5,15)<< endl;
	cout << gcd(24,6) << endl;

}
