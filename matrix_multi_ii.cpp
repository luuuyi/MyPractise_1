#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

int main(){
    int x=0;
    while(cin>>x){
        vector<vector<int>> vecs(x,vector<int>(2,0));
        for(int i=0;i<x;i++){
            cin >> vecs[i][0] >> vecs[i][1];
        }
        string str;
        cin >> str;
        stack<vector<int>> stk1,stk2;
        int lens = str.size();
        int res = 0;
        for(int i=0;i<lens;i++){
            if(str[i]==')'||str[i]=='('){
                if(str[i]==')'){
                    if(stk1.size()==1)  continue;
                    while(stk1.top().size()!=0){
                        stk2.push(stk1.top());
                        stk1.pop();
                    }
                    stk1.pop();
                    while((!stk2.empty())&&stk2.size()!=1){
                        vector<int> a(stk2.top().begin(),stk2.top().end());
                        stk2.pop();
                        vector<int> b(stk2.top().begin(),stk2.top().end());
                        stk2.pop();
                        res += a[0]*a[1]*b[1];
                        stk2.push(vector<int>({ a[0], b[1] }));
                    }
                    if(!stk2.empty()&&stk2.size()==1){
                        stk1.push(stk2.top());
                        stk2.pop();
                    }
                }
                else{
                    stk1.push(vector<int>());
                }
            }
            else{
                stk1.push(vecs[str[i]-'A']);
            }
        }
        cout << res <<endl;
    }
    return 0;
}