#include <iostream>
#include <string>
#include <map>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    string str;
    while(cin>>str){
        int nums = 0;
        cin >> nums;
        string res = str.substr(0,nums);
        cout << res << endl;
    }
    return 0;
}