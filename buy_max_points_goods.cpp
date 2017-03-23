#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(vector<int> a1, vector<int> a2){
    return a1[0]*a1[1] > a2[0]*a2[1];
}

int main(){
    int N=0,m=0;
    while(cin>>N>>m){
        vector<vector<int>> vec;
        for(int i=0;i<m;i++){
            int v=0,p=0,q=0;
            cin >> v >> p >> q;
            vector<int> tmp({v,p,q});
            vec.push_back(tmp);
        }
        vector<vector<int>> vec_tmp(vec.begin(),vec.end());
        for(int i=0;i<vec.size();i++){
            vector<bool> flags(vec.size(),true);
            if()
        }
    }
    return 0;
}