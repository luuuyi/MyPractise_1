#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

int main()
{
	int m;
	while (cin >> m)
	{
		int m_tmp=m;
		int count=0;
		while(m_tmp){
			count++;
			m_tmp = m_tmp&(m_tmp-1);
		}
		cout << count << endl;
	}
	return 0;
}