#include <iostream>
#include <map>
#include <string>
#include <queue>
#include <stack>

using namespace std;

int main() {
	string str_o;
	while (getline(cin, str_o)) {
		stack<string> stk;
		int start = 0;
		string str = str_o;
		while (start >= 0) {
			int pos = str.find_first_of(' ', start);
			string sub;
			if (pos != -1) sub = str.substr(start, pos - start);
			else    sub = str.substr(start);
			stk.push(sub);
			if (pos != -1) start = pos + 1;
			else    start = pos;
		}
		while (!stk.empty()&&stk.size()!=1) {
			cout << stk.top()<<" ";
			stk.pop();
		}
        cout << stk.top()<<endl;
	}
	return 0;
}