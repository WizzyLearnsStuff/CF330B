#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	vector<vector<bool>> v(n + 1, vector<bool>(n + 1, true));

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;

		v[a][b] = false;
		v[b][a] = false;
	}

	for (int i = 1; i <= n; i++) v[i][i] = false;

	int r = 0;
	for (int i = 1; i <= n; i++) {
		int s = 0;
		for (int j = 1; j <= n; j++) s += v[i][j];
		if (s == n - 1) {
			r = i;
			break;
		}
	}

	cout << n - 1 << '\n';
	for (int i = 1; i <= n; i++) if (i != r) {
		cout << i << ' ' << r << '\n';
	}
}
