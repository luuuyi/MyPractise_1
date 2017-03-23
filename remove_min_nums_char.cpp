#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    string str;
    while(cin>>str){
        int lens = str.size();
        map<char,int> mp;
        for(int i=0;i<lens;i++){
            ++mp[str[i]];
        }
        int min = 0x7fffffff;
        for(auto k=mp.begin();k!=mp.end();k++){
            if(k->second<min)   min = k->second;
        }
        string res;
        for(int i=0;i<lens;i++){
            if(mp[str[i]]!=min) res.push_back(str[i]);
        }
        cout << res << endl;
    }
    return 0;
}