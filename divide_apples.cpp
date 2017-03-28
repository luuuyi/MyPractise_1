#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

int putapples(int m, int n)
{
	if (m < 0)
		return 0;
	if (m == 1 || n == 1)
		return 1;
	return putapples(m, n - 1) + putapples(m - n, n);
}

int main()
{
	int m, n;
	while (cin >> m >> n)
	{
		cout << putapples(m, n) << endl;
	}
	return 0;
}