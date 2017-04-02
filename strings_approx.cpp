#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int compute(string& s1, string& s2, int lens1, int lens2){
    vector<vector<int>> dp(lens1+1,vector<int>(lens2+1,0));
    for(int i=0;i<=lens2;i++){
        dp[0][i] = i;
    }
    for(int i=0;i<=lens1;i++){
        dp[i][0] = i;
        
    }
    for(int i=1;i<=lens1;i++){
        for(int j=1;j<=lens2;j++){
            if(s1[i-1]==s2[j-1])    dp[i][j] = dp[i-1][j-1];
            else{
                int tmp = min(dp[i-1][j],dp[i][j-1]);
                dp[i][j] = min(tmp,dp[i-1][j-1]) + 1;
            }
        }
    }
    return dp[lens1][lens2];
}

int main(){
    string str1, str2;
    while(cin>>str1>>str2){
        int lens_1 = str1.size(), lens_2 = str2.size();
        int nums = 0;
        nums = compute(str1,str2,lens_1,lens_2);
        cout << 1 << "/" << nums+1 << endl;
    }
    return 0;
}