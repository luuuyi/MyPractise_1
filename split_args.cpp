#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

int main(){
	string strs;
	while (getline(cin, strs)){
		int lens = strs.size();
		stack<char> tmp;
		vector<string> res;
		string tmp_str;
		for (int i = 0; i<lens; i++){
			if (strs[i] == ' '){
				if (tmp.empty()){
					res.push_back(tmp_str);
					tmp_str.clear();
				}
				else{
					tmp_str.push_back(strs[i]);
				}
			}
			else if (strs[i] == '\"'){
				if (tmp.empty()) tmp.push(strs[i]);
				else{
					tmp.pop();
					res.push_back(tmp_str);
					tmp_str.clear();
				}
			}
			else    tmp_str.push_back(strs[i]);
		}
		if (!tmp_str.empty())	res.push_back(tmp_str);
		int size = res.size();
		cout << size << endl;
		for (int i = 0; i<size; i++) cout << res[i] << endl;
	}
	return 0;
}