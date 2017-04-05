#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

string fullStr(string& s){
    int lens = s.size();
    string res = s;
    int n = 8-lens;
    while(n--){
        res += "0";
    }
    return res;
}

int main(){
    int n;
    while(cin>>n){
        vector<string> strs;
        for(int i=0;i<n;i++){
            string tmp; cin >> tmp;
            int lens = tmp.size();
            int m = lens/8;
            for(int j=0;j<=m;j++){
                if(j==m)    strs.push_back(fullStr(tmp.substr(j*8,8)));
                else    strs.push_back(tmp.substr(j*8,8));
            }
        }
        int lens = strs.size();
        for(int i=0;i<lens;i++) cout << strs[i] << endl;
    }
    return 0;
}