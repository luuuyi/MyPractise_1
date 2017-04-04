#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	while (cin >> n) {
		vector<int> vecs(n,0);
		for(int i=0;i<n;i++)	cin >> vecs[i];
		int flag = 0;
		cin >>flag;
		sort(vecs.begin(),vecs.end());
		if(flag==1)	reverse(vecs.begin(),vecs.end());
		int lens = vecs.size();
		for(int i=0;i<lens;i++){
			if(i!=lens-1)	cout << vecs[i] << " ";
			else	cout << vecs[i] << endl;
		}	
	}
	return 0;
}