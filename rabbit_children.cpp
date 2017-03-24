#include <iostream>
#include <string>
#include <map>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int month;
    while(cin>>month){
        vector<int> vec(month+1,1);
        for(int i=3;i<=month;i++){
            vec[i] = vec[i-1] + vec[i-2];
        }
        cout << vec[month] << endl;
    }
    return 0;
}