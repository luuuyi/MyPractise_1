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
        if(n<=2)    return -1;
        else{
            vector<int> nums(1,1);
            for(int i = 2;i<=n;i++){
                int x=-2,y=-1,z=0;
                vector<int> tmp(2*i-1,0);
                for(int j = 0;j<2*i-1;j++){
                    int val = (x>=0&&x<nums.size()?nums[x]:0)+(y>=0&&y<nums.size()?nums[y]:0)+(z>=0&&z<nums.size()?nums[z]:0);
                    tmp.push_back(val);
                    ++x;++y;++z;
                }
                nums.assign(tmp.begin(),tmp.end());
            }
            for(int i = 0;i<nums.size();i++){
                if(nums[i]&0x01==0){
                    cout << i+1 << endl;
                    break;
                }
            }
        }
    }
    return 0;
}