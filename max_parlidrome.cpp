#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int compute(string& str1, string& str2){
    int lens_1 = str1.size(), lens_2 = str2.size();
    vector<vector<int>> dp(lens_1+1,vector<int>(lens_2+1,0));
    int max = 0;
    for(int i=1;i<=lens_1;i++){
        for(int j=1;j<=lens_2;j++){
            if(str1[i-1]==str2[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
                if(dp[i][j]>max)    max=dp[i][j];
            }
            else    dp[i][j] = 0;
        }
    }
    return max;
}

int main(){
    string str;
    while(cin>>str){
        //int lens = str.size();
        string reverse_str(str.rbegin(),str.rend());
        int res = compute(str,reverse_str);
        cout << res << endl;
    }
    return 0;
}