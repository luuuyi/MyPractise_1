#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n=0;
    while(cin>>n){
        vector<vector<int>> res;
        int x=0;
        while(7*x <= 100){
            if((100-7*x)%4==0){
                int y = (100-7*x)/4;
                if((100-x-y)%3==0){
                    int z = (100-x-y)/3;
                    vector<int> tmp({x,y,z});
                    res.push_back(tmp);
                    ++x;
                }
                else{
                    ++x;continue;
                }
            }
            else    ++x;
        }
        int lens = res.size();
        for(int i=0;i<lens;i++){
            int lens_tmp = res[i].size();
            for(int j=0;j<lens_tmp;j++){
                if(j!=lens_tmp-1)   cout << res[i][j] << " ";
                else    cout << res[i][j] << endl;
            }
        }
    }
    return 0;
}