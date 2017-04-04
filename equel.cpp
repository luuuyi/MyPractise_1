#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	while (cin >> n) {
		int start = 2;
		int res = 0;
		for(int i=0;i<n;i++){
			res+=start + 3*i;
		}
		cout << res << endl;
	}
	return 0;
}