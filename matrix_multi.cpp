#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int x = 0, y=0, z=0;
    while(cin>>x>>y>>z){
        vector<vector<int>> w1;
        vector<int> tmp(y,0);
        for(int i = 0;i<x;i++){
            for(int j = 0;j<y;j++)  cin >> tmp[j];
            w1.push_back(tmp);
        }
        tmp.assign(z,0);
        vector<vector<int>> w2;
        for(int i = 0;i<y;i++){
            for(int j = 0;j<z;j++)  cin >> tmp[j];
            w2.push_back(tmp);
        }
        vector<vector<int>> w3(x,vector<int>(z,0));
        for(int i = 0;i<x;i++){
            for(int j = 0;j<z;j++){
                for(int k = 0;k<y;k++)  w3[i][j]+=w1[i][k]*w2[k][j];
            }
        }
        for(int i = 0;i<x;i++){
            for(int j = 0;j<z;j++){
                if(j!=z-1)  cout << w3[i][j] << " ";
                else    cout << w3[i][j] << endl;
            }
        }
    }
    return 0;
}