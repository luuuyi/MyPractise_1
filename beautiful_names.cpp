#include <iostream>
#include <string>
#include <map>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n;
    while(cin>>n){
        vector<string> strs(n);
        for(int i=0;i<n;i++)    cin >> strs[i];
        for(int i=0;i<n;i++){
            vector<int> nums(26,0);
            for(int j=0;j<strs[i].size();j++){
                ++nums[strs[i][j]-'a'];
            }
            sort(nums.begin(),nums.end());
            reverse(nums.begin(),nums.end());
            int points = 0;
            for(int j=0;j<nums.size();j++){
                points += nums[j]*(26-j);
            }
            cout << points << endl;
        }
    }
    return 0;
}