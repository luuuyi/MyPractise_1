#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

int main(){
    string str;;
    while(cin>>str){
        int lens = str.size();
        map<char,int> mp;
        for(int i=0;i<lens;i++){
            ++mp[str[i]];
        }
        bool flag = false;
        for(int i=0;i<lens;i++){
            if(mp[str[i]]==1){
                flag = true;
                cout << str[i] << endl;
            }
        }
        if(!flag)   cout << -1 << endl;
    }
    return 0;
}
