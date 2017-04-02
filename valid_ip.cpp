#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	string str;
	while (getline(cin,str)) {
		int lens = str.size();
		if(lens>15||lens=0){
			cout << "NO" << endl;
			continue;
		}
		string tmp;
		int dot_nums=0,nums_num=0;
		for(int i=0;i<lens;i++){
			if(str[i]=='.'){
				if(tmp.empty()){
					cout << "NO" << endl;
					continue;
				}
				else{
					int n = atoi(tmp.c_str());
					tmp.clear();++dot_nums;
					if(n<0||n>255){
						cout << "NO" << endl;
						continue;
					}
					++nums_num;
				}
			}
			else if(str[i]>=0&&str[i]<='9')	tmp.push_back(str[i]);
			else{
				cout << "NO" << endl;
				continue;
			}
		}
		if(!tmp.empty()){
			int n = atoi(tmp.c_str());
			tmp.clear();
			if(n<0||n>255) 	cout << "NO" << endl;
			++nums_num;
		}
		if(nums_num==4&&dot_nums==3)	cout << "YES" << endl;
		else	cout << "NO" << endl;
	}
	return 0;
}