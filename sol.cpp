#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int n;
	cin >> n;
	vector<int> a(n);
	set<int> s;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		s.insert(a[i]);
	}
	for(int i = 1; i < 1024; i++) {
		bool checker = true;
		for(int j = 0; j < n; j++) {
			checker &= (s.find(a[j] ^ i) != s.end());
		}
		if(checker) {
			cout << i << "\n";
			return;
		}
	}
	cout << "-1\n";	
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T = 1;
	cin >> T;
	for(int tc = 0; tc < T; tc++) {
		test_case();
	}
}
