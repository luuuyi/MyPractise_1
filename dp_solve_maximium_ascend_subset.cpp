#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n;
    while(cin>>n){
        vector<int> datas(n,0);
        for(int i=0;i<n;i++)    cin >> datas[i];
        vector<int> dp(n+1,0);dp[1] = 1;
        int max_v = 0x80000000;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(datas[i]>datas[j])   dp[i+1] = max(dp[j+1] + 1,dp[i+1]);
                else if(datas[i]==datas[j]) dp[i+1] = max(dp[j+1],dp[i+1]);
                else    dp[i+1] = max(1,dp[i+1]);
                if(dp[i+1]>max_v) max_v = dp[i+1];
            }
        }
        cout << max_v << endl;
    }
    return 0;
}