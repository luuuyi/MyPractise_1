#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n;
    while(cin>>n){
        map<string,int> mp;
        vector<string> vecs;
        for(int i=0;i<n;i++){
            string tmp; cin >> tmp;
            vecs.push_back(tmp);
            mp[tmp] = 0;
        }
        int m=0, invalid = 0;
        cin >> m;
        for(int i=0;i<m;i++){
            string tmp; cin >> tmp;
            if(mp.find(tmp)!=mp.end())  mp[tmp] += 1;
            else    ++invalid;
        }
        for(auto k = vecs.begin();k!=vecs.end();k++){
            cout  << *k << " : " << mp[*k] << endl;
        }
        cout << "Invalid : " << invalid << endl;
    }
    return 0;
}