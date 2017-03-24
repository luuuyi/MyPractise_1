#include <iostream>
#include <string>
#include <map>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int n;
	while (cin >> n){
		vector<int> wgt(n, 0);
		vector<int> nums(n, 0);
		for (int i = 0; i < n; i++){
			cin >> wgt[i];
		}
		for (int i = 0; i < n; i++){
			cin >> nums[i];
		}
		map<int, int> mp;
		for (int i = 0; i <= nums[0]; i++){
			++mp[wgt[0] * i];
		}
		for (int i = 1; i < n; i++){
			vector<int> tmp;
			for (int j = 1; j <= nums[i]; j++){
				for (auto k = mp.begin(); k != mp.end(); k++){
					tmp.push_back(wgt[i] * j + k->first);
				}
			}
			for (int q = 0; q < tmp.size(); q++)
			{
				++mp[tmp[q]];
			}
		}
		cout << mp.size() << endl;
	}
	return 0;
}