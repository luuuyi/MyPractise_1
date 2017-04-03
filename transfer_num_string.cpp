#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    string str;
    while(cin>>str){
        int lens = str.size();
        string res;
        bool flag = true;
        for(int i=0;i<lens;i++){
            if(str[i]>='0'&&str[i]<='9'){
                if(flag){
                    flag = false;
                    res.push_back('*');
                }
                res.push_back(str[i]);
            }
            else{
                if(!flag){
                    flag = true;
                    res.push_back('*');
                }
                res.push_back(str[i]);
            }
        }
        if(!flag)   res.push_back('*');
        cout << res << endl;
    }
    return 0;
}