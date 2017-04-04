#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<char,int> p1, pair<char,int> p2){
	return p1.second > p2.second;
}

int main() {
	string str;
	while (getline(cin,str)) {
		int lens = str.size();
		map<char,int> mp;
		for(int i=0;i<lens;i++)	++mp[str[i]];
		vector<pair<char,int>> vecs;
		for(auto k = mp.begin();k!=mp.end();k++){
			vecs.push_back(make_pair(k->first,k->second));
		}
		stable_sort(vecs.begin(), vecs.end(), cmp);
		int size = vecs.size();
		for(int i=0;i<size;i++)	cout << vecs[i].first;
        cout << endl;
	}
	return 0;
}