#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

vector<int> findDp(vector<int> vecs){
    int lens = vecs.size();
    vector<int> dp(lens,1);
    for(int i=0;i<lens;i++){
        for(int j=i-1;j>=0;j--){
            if(vecs[j]<vecs[i]){
                dp[i] = max(dp[i],dp[j]+1);
            }
        }
    }
    return dp;
}

int main(){
    int N=0;
    while(cin>>N){
        vector<int> vecs(N,0);
        for(int i=0;i<N;i++){
            cin >> vecs[i];
        }
        vector<int> dp = findDp(vecs);
        vector<int> vecs_rev(vecs.rbegin(),vecs.rend());
        vector<int> dp_rev = findDp(vecs_rev);
        vector<int> dp_tmp(dp_rev.rbegin(),dp_rev.rend());
        int max = 0;
        for(int i=0;i<N;i++){
            if(dp[i]+dp_tmp[i]>max){
                max= dp[i]+dp_tmp[i];
            }
        }
        cout <<  N-max+1 << endl;
    }
    return 0;
}