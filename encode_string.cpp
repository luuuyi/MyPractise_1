#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

string upperString(string keys){
    int lens = keys.size();
    string res;
    for(int i=0;i<lens;i++){
        if(keys[i]>='a'&&keys[i]<='z'){
            res.push_back(keys[i]-('a'-'A'));
        }
        else    res.push_back(keys[i]);
    }
    return res;
}

string transferString(string origin, string keys){
	string res;
	for (int i = 0; i<origin.size(); i++){
		if (origin[i] <= 'z'&&origin[i] >= 'a'){
			res.push_back(keys[origin[i] - ('a' - 'A') - 'A'] + ('a' - 'A'));
		}
		else if (origin[i] <= 'Z'&&origin[i] >= 'A')    res.push_back(keys[origin[i] - 'A']);
		else	res.push_back(origin[i]);
	}
	return res;
}

int main(){
    string keys;
    while(cin>>keys){
        string str;
        cin >> str;
        string up_keys = upperString(keys);
		int j = 0, k = 0, lens = up_keys.size();
		map<char, int> mp;
		string passwd_table;
		for (int i = 0; i<26; i++){
			if (j<lens){
				while (mp[up_keys[j]] >= 1 && j<lens){
					++j;
				}
				if (j < lens){
					passwd_table.push_back(up_keys[j]);
					++mp[up_keys[j]];
					++j;
				}
				else{
					i--;
				}
			}
			else{
				while (mp['A' + k] >= 1){ 
					++k;
				}
				passwd_table.push_back('A' + k);
				++mp['A' + k];
				++k;
			}
		}
		cout << transferString(str, passwd_table) << endl;
    }
    return 0;
}