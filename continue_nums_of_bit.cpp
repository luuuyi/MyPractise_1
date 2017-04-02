#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	while (cin >> n) {
		int m=8;
		int nums = 0,max = 0;
		while(m--){
			int tmp = n & 0x01;
			n = n >> 1;
			if(tmp){
				++nums;
				if(nums>max)	max = nums;
			}
			else	nums= 0;
		}
		cout << max <<endl;
	}
	return 0;
}