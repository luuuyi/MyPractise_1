#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

double calcu(string str){
	int count=0;
	int lens = str.size();
	for(int i=0;i<lens;i++){
		if(str[i]=='G'||str[i]=='C')	++count;
	}
	double res = (double)count/(double)lens;
	return res;
}

int main()
{
	string str;
	while (cin >> str)
	{
		int n = 0;
		cin >> n;
		int lens = str.size();
		if(lens<=n){
			printf("%s\n",str.c_str());
			continue;
		}
		double max = 0;
		int index = -1;
		for(int i=0;i<lens-n-1;i++){
			if(calcu(str.substr(i,n))>max){
				max = calcu(str.substr(i,n));
				index = i;
			}
		}
		string res;
		if(index==-1)	res = str.substr(0,n);
		else	res = str.substr(index,n);
		cout << res << endl;
	}
	return 0;
}