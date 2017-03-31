#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void solver(vector<int>& vecs, int cur, int n, vector<int>& tmp) {
	if (cur >= n) {
		for (int i = 0; i<n; i++) {
			if (i != n - 1)  cout << tmp[i] << " ";
			else    cout << tmp[i] << endl;
		}
		return;
	}
	for (int i = cur; i<n; i++) {
		swap(vecs[cur], vecs[i]);
		tmp.push_back(vecs[cur]);
		solver(vecs, cur + 1, n, tmp);
		tmp.pop_back();
		swap(vecs[cur], vecs[i]);
	}
}

int main() {
	int n;
	while (cin >> n) {
		vector<int> vecs(n, 0);
		for (int i = 0; i<n; i++)    cin >> vecs[i];
		sort(vecs.begin(), vecs.end());
		vector<int> tmp;
		solver(vecs, 0, n, tmp);
	}
	return 0;
}