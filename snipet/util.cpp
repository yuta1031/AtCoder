#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define rrep(i, a, b) for (ll i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
#define all(x) (x).begin(), (x).end()
template <class T>
inline bool chmin(T &a, T b)
{
	if (a > b)
	{
		a = b;
		return true;
	}
	return false;
}
template <class T>
inline bool chmax(T &a, T b)
{
	if (a < b)
	{
		a = b;
		return true;
	}
	return false;
}

// 最小公倍数
int lcm(int a, int b) { return a * b / __gcd(a, b); }
// 桁数
int digits(ll n)
{
	if (n / 10 == 0)
		return 1;
	return digits(n / 10) + 1;
}
// 素数判定 n以下の素数配列を返す
vector<ll> makePrimes(ll n)
{
	vector<ll> res, pr(n + 1, 1);
	pr[0] = pr[1] = 0;
	rep(p, 2, sqrt(n) + 2) if (pr[p]) for (int x = p * 2; x <= n; x += p) pr[x] = 0;
	rep(p, 2, n + 1) if (pr[p]) res.push_back(p);
	return res;
}
// 素因数分解
vector<ll> factalization(ll x)
{
	vector<ll> res;
	for (int i = 2; i * i <= x; i++)
	{
		while (x % i == 0)
		{
			x /= i;
			res.push_back(i);
		}
	}
	if (x != 1)
	{
		res.push_back(x);
	}
	return res;
}

int main()
{
}
