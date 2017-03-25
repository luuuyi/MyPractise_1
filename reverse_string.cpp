#include <iostream>
#include <map>
#include <string>
#include <queue>
#include <stack>

using namespace std;

int main(){
    string str;
    while(getline(cin,str)){
        stack<char> stk;
        for(int i=0;i<str.size();i++){
            stk.push(str[i]);
        }
        while(!stk.empty()){
            cout << stk.top();
            stk.pop();
        }
        cout << endl;
    }
    return 0;
}