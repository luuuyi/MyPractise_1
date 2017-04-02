#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;
/*
int main(){
    string str1, str2;
    while(cin>>str1>>str2){
        int lens_1 = str1.size();
        int lens_2 = str2.size();
        map<char,int> mp;
        for(int i=0;i<lens_2;i++){
            ++mp[str2[i]];
        }
        bool res = true;
        for(int i=0;i<lens_1;i++){
            if(mp[str1[i]]==0){
                res = false;
                break;
            }
            else    --mp[str1[i]];
        }
        if(res) cout << "true" << endl;
        else    cout << "false" << endl;
    }
    return 0;
}
*/
int main(){
    string str1, str2;
    while(cin>>str1>>str2){
        int lens_1 = str1.size();
        int lens_2 = str2.size();
        map<char,int> mp;
        for(int i=0;i<lens_2;i++){
            mp[str2[i]] = 1;
        }
        bool res = true;
        for(int i=0;i<lens_1;i++){
            if(mp[str1[i]]==0){
                res = false;
                break;
            }
            //else    --mp[str1[i]];
        }
        if(res) cout << "true" << endl;
        else    cout << "false" << endl;
    }
    return 0;
}