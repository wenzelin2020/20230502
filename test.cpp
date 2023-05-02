#include <bits/stdc++.h>//f**k ccf,fuck myself very much
using namespace std;
using namespace std;
string s, a;
int lena, lens, w[256], wz, dp[100001]; //dp[i]代表发到第i个字符的机器的数量

signed main() {
	cin >> a >> s;
	lens = s.size();
	lena = a.size();
	for (int i = 0; i < lena; i++)
		w[a[i]] = i + 1; //存储字符a[i]在a中出现的位置
	for (int i = 0; i < lens; i++) {
		wz = w[s[i]]; //看一下s[i]在a中出现的位置
		if (wz == 1) {//在开头，就删掉前面的，加新的
			if (dp[lena] > 0) {
				dp[lena]--;
			}
			dp[1]++;
		} else {
			if (dp[wz - 1] > 0) {//发报到一半,证明是连续的
				dp[wz - 1]--;
				dp[wz]++;
			} else
				cout << "error";
		}
	}
	cout << dp[lena];
	return 0;
}