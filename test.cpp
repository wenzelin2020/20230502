#include <bits/stdc++.h>//f**k ccf,fuck myself very much
using namespace std;
using namespace std;
string s, a;
int lena, lens, w[256], wz, dp[100001]; //dp[i]��������i���ַ��Ļ���������

signed main() {
	cin >> a >> s;
	lens = s.size();
	lena = a.size();
	for (int i = 0; i < lena; i++)
		w[a[i]] = i + 1; //�洢�ַ�a[i]��a�г��ֵ�λ��
	for (int i = 0; i < lens; i++) {
		wz = w[s[i]]; //��һ��s[i]��a�г��ֵ�λ��
		if (wz == 1) {//�ڿ�ͷ����ɾ��ǰ��ģ����µ�
			if (dp[lena] > 0) {
				dp[lena]--;
			}
			dp[1]++;
		} else {
			if (dp[wz - 1] > 0) {//������һ��,֤����������
				dp[wz - 1]--;
				dp[wz]++;
			} else
				cout << "error";
		}
	}
	cout << dp[lena];
	return 0;
}