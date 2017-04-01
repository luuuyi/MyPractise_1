#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

string lowerString(string s){
	int lens = s.size();
	string res;
	for(int i=0;i<lens;i++){
		if(s[i]>='A'&&s[i]<='Z')	res.push_back(s[i]+'a'-'A');
		else	res.push_back(s[i]);
	}
	return res;
}

int main(){
	string str1,str2;
	while (cin >>str1>>str2){
		str1 = lowerString(str1);
		str2 = lowerString(str2);
		int lens_2=str2.size();
		vector<int> dp(lens_2,0);
		int lens_1 = str1.size();
		int max = 0;
		for(int i=0;i<lens_1;i++){
			vector<int> dp_tmp(dp.begin(),dp.end());
			for(int j=0;j<lens_2;j++){
				if(str1[i]==str2[j]){
					if(j>0)	dp_tmp[j] = dp[j-1]+1;
					else	dp_tmp[j] = 1;
					if(dp_tmp[j]>max)	max = dp_tmp[j];
				}
				else	dp_tmp[j]=0;
			}
			dp.assign(dp_tmp.begin(),dp_tmp.end());
		}
		cout << max << endl;
	}
	return 0;
}