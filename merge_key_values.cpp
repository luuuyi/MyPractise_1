#include <iostream>
#include <unordered_map>
#include <map>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        int key=0,value=0;
        map<int,int> mp;
        while(n--){
            cin >> key >> value;
            mp[key] += value;
        }
        for(auto n=mp.begin();n!=mp.end();n++){
            cout << n->first << " " << n->second << endl; 
        }
    }
    return 0;
}