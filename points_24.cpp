#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

void solve(vector<int>& vec, int cur, int n, int res, bool &ret){
    if(res>24)  return;
    if(cur>=n){
        if(res==24) ret=true;
        return ;
    }
    for(int i=0;i<2;i++){
        if(i==0){
            solve(vec,cur+1,n,res+vec[cur],ret);
        }
        else if(i==1&&cur==0){
            solve(vec,cur+1,n,1*vec[cur],ret);
        }
        else if(i==1){
            solve(vec,cur+1,n,res*vec[cur],ret);
        }
    }
}

int main(){
    int n1=0,n2=0,n3=0,n4=0;
    while(cin>>n1>>n2>>n3>>n4){
        vector<int> vec({n1,n2,n3,n4});
        sort(vec.begin(),vec.end());
        bool ret = false;
        solve(vec,0,4,0,ret);
        if(ret) cout << "true" << endl;
        else    cout << "false" << endl;
    }
    return 0;
}